#!/bin/bash
# Safely pull updates for an existing git subtree without creating nested directories.

set -e

echo "=== Safe Git Subtree Pull ==="

# Check if working tree is clean
if ! git diff-index --quiet HEAD --; then
    echo "Error: working tree has uncommitted changes."
    echo "Please commit or stash changes before running this script."
    exit 1
fi

# Prompt for subtree remote
echo
echo "Available remotes:"
git remote -v | awk '{print $1}' | sort | uniq
read -p "Enter the name of the subtree remote to pull from: " remote

if ! git remote | grep -qx "$remote"; then
    echo "Error: remote '$remote' does not exist."
    exit 1
fi

# Prompt for subtree prefix
read -p "Enter the subtree prefix path : " prefix

# Check that the prefix exists
if [ ! -d "$prefix" ]; then
    echo "Error: the subtree prefix path '$prefix' does not exist. Exiting."
    exit 1
fi

# Check if the prefix directory already contains nested subtree (prevents duplication)
if [ -d "$prefix/$(basename $prefix)" ]; then
    echo "Warning: nested subtree detected inside '$prefix'."
    echo "Pulling may create duplicated directory structure. Fix manually before proceeding."
    exit 1
fi

# Fetch remote updates
echo "Fetching from remote '$remote'..."
git fetch "$remote"

# Pull updates into existing subtree safely
echo "Pulling updates into subtree at '$prefix' from '$remote/main'..."
git subtree pull --prefix="$prefix" "$remote" main --squash

echo
echo "Subtree pull completed successfully."
