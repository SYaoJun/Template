#include <iostream>

int main() {
    int arr[5];
    arr[5] = 10; // 越界写
    std::cout << arr[5] << std::endl; // 越界读
    return 0;
}
