#include <iostream>

int main() {
    int arr[2] = {1, 2};
    int* p1 = &arr[1] + 1; // arr[1] 바로 뒤 → past-the-end of arr[2]
    int b = 0;
    int* p2 = &b;           // b의 주소

    std::cout << (p1 == p2) << "\n"; // 만약 arr[2]와 b가 연속 배치되었다면 1 (true)
}
