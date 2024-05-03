#include <iostream>

void printValue(int* ptr) {
    if (ptr != nullptr) {
        std::cout << "Value: " << *ptr << std::endl;
    } else {
        std::cout << "Pointer is nullptr" << std::endl;
    }
}

int main() {
    int* ptr1 = nullptr;
    int* ptr2 = new int(10);

    printValue(ptr1);  // Output: Pointer is nullptr
    printValue(ptr2);  // Output: Value: 10

    delete ptr2;
    ptr2 = nullptr;

    printValue(ptr2);  // Output: Pointer is nullptr

    return 0;
}