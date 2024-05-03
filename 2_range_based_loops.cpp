#include <iostream>
#include <vector>
#include <string>
#include <map>

int main() {
    // Scenario 1: Range-based for loop with an array
    int numbers[] = {1, 2, 3, 4, 5};
    for (int number : numbers) {
        std::cout << number << " ";
    }
    std::cout << std::endl;

    // Scenario 2: Range-based for loop with a vector
    std::vector<std::string> fruits = {"Apple", "Banana", "Orange"};
    for (std::string& fruit : fruits) {
        fruit = "Pineapple";
    }
    std::cout << std::endl;

    // Scenario 3: Range-based for loop with a string
    std::string message = "Hello, World!";
    for (char c : message) {
        std::cout << c << " ";
    }
    std::cout << std::endl;

    // Scenario 4: Range-based for loop with a map
    std::map<int, std::string> students = {{1, "Alice"}, {2, "Bob"}, {3, "Charlie"}};
    for (const auto& pair : students) {
        std::cout << "ID: " << pair.first << ", Name: " << pair.second << std::endl;
    }

    return 0;
}