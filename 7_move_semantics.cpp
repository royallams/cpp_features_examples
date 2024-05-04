#include <iostream>
#include <vector>

// Function to create and return a vector of integers
std::vector<int> createVector() {
    std::vector<int> vec = {1, 2, 3, 4, 5};
    return vec; // Return the vector by value
}

int main() {
    // Call the function to create a vector
    std::vector<int> result = createVector();

    // Output the elements of the returned vector
    std::cout << "Elements of the returned vector:" << std::endl;
    for (int num : result) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
