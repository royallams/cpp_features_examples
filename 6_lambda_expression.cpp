#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    // Scenario 1: Basic lambda expression
    auto sum = [](int a, int b) {
        return a + b;
    };
    std::cout << "Sum: " << sum(5, 3) << std::endl;

    // Scenario 2: Lambda expression with capture list
    int factor = 2;
    auto multiply = [factor](int num) {
        return num * factor;
    };
    std::cout << "Multiply: " << multiply(4) << std::endl;

    // Scenario 3: Lambda expression as a function parameter
    std::vector<int> numbers = {1, 2, 3, 4, 5};
    int count = std::count_if(numbers.begin(), numbers.end(), [](int num) {
        return num % 2 == 0;
    });
    std::cout << "Count of even numbers: " << count << std::endl;

    // Scenario 4: Lambda expression with mutable capture
    int counter = 0;
    auto increment = [counter]() mutable {
        counter++;
    };
    increment();
    std::cout << "Counter: " << counter << std::endl;

    return 0;
}