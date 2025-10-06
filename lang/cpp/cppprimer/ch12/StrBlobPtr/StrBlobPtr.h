#ifndef STRBLOBPTR_H
#define STRBLOBPTR_H

#include <vector>
#include <string>
#include <memory>

class StrBlob;
class StrBlobPtr {
public:
    StrBlobPtr(): curr(0) { }
    StrBlobPtr(StrBlob &a, size_t sz=0);
    std::string& deref() const;
    StrBlobPtr& incr();       // prefix version
private:
    // check returns a shared_ptr to the vector if the check succeeds
    std::shared_ptr<std::vector<std::string>>
        check(std::size_t, const std::string&) const;
    // store a weak_ptr, which means the underlying vector might be destroyed
    std::weak_ptr<std::vector<std::string>> wptr;
    std::size_t curr;      // current position within the array
};
#endif
