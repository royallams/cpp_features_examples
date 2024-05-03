#include <iostream>
#include <vector>
#include <map>

int main() {
    // Auto type deduction for variables
    auto number = 42;
    auto name = "John Doe";
    auto pi = 3.14159;

    std::cout << "Number: " << number << std::endl;
    std::cout << "Name: " << name << std::endl;
    std::cout << "Pi: " << pi << std::endl;

    // Auto type deduction for function return types
    auto add = [](int a, int b) {
        return a + b;
    };

    std::cout << "Sum: " << add(5, 7) << std::endl;

    // Auto type deduction for range-based loops
    std::vector<int> numbers = {1, 2, 3, 4, 5};
    for (auto num : numbers) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    // Auto type deduction for iterators
    std::map<int, std::string> students = {{1, "Alice"}, {2, "Bob"}, {3, "Charlie"}};
    for (auto it = students.begin(); it != students.end(); ++it) {
        std::cout << it->first << ": " << it->second << std::endl;
    }



auto x = 10; // x is deduced as int
auto y = 3.14; // y is deduced as double
auto z = "Hello"; // z is deduced as const char*
auto str = std::string("Hello"); // str is deduced as std::string
auto& ref = str; // ref is deduced as std::string&
auto* ptr = &str; // ptr is deduced as std::string*
const auto& cref = str; // cref is deduced as const std::string&
auto&& rref = str ; // rref is deduced as std::string&&





    return 0;
}