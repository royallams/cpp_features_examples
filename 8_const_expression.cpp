#include <iostream>

// Declaring a constexpr function
constexpr int sum(int x, int y) {
    return x + y;
}




int main() {
    // Using the constexpr function at compile time

    constexpr int result = sum(3, 4); // This is evaluated at compile time
    std::cout << "Result at compile time: " << result << std::endl;

    // Using the constexpr function at runtime
    int a, b;
    std::cout << "Enter two numbers: ";
    std::cin >> a >> b;
    int runtime_result = sum(5, 9); // This is evaluated at runtime
    std::cout << "Result at runtime: " << runtime_result << std::endl;

    return 0;
}
