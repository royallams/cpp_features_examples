#include <iostream>


// Strongly Typed Enum
enum class Color { Red, Green, Blue };

// Old Enum
enum Fruit { Apple, Banana, Orange };

int main() {
    // Strongly Typed Enum
    Color color = Color::Red;
    if (color == Color::Red) {
        std::cout << "Strongly Typed Enum: Red" << std::endl;
    }

    // Old Enum
    Fruit fruit = Apple;
    // if (fruit == Apple) {
    //     std::cout << "Old Enum: Apple" << std::endl;
    // }

    if(fruit == 0) {
        std::cout << "Old Enum: Apple" << std::endl;
    }

    if(color == Color::Red) {
        std::cout << "Strongly Typed Enum: Red" << std::endl;
    }



    int res = static_cast<int>(Color::Red);
    std::cout << res << std::endl;



    // Strongly Typed Enum - Type Safety
    // Uncommenting the following line will result in a compilation error
    // if (color == Apple) {
    //     std::cout << "This won't compile!" << std::endl;
    // }

    // Old Enum - No Type Safety
    // Uncommenting the following line will not result in a compilation error
    // if (fruit == Color::Red) {
    //     std::cout << "This will compile, but it's incorrect!" << std::endl;
    // }

    return 0;
}