#include <iostream>
#include <vector>
#include <list>

/*
Uniform Initialization: std::initializer_list is used for uniform initialization of objects. It allows you to initialize an object with a list of values in a consistent way, regardless of the type of the object. This is particularly useful for initializing containers, arrays, and user-defined types.

Immutable: std::initializer_list is an immutable (read-only) container. Once it's created, you can't add or remove elements, which makes it safe to pass around without worrying about it being modified.

Efficient: std::initializer_list is a lightweight container. It doesn't allocate its own storage; it just holds a pair of pointers to the beginning and the end of an array of elements. This makes it more efficient than other containers for small lists of values.

Variable Number of Arguments: std::initializer_list can be used to pass a variable number of arguments to a function. This is useful when you don't know in advance how many arguments you need to pass.

Initialization of Class Members: std::initializer_list can be used in a constructor to initialize class members. This is useful when you have a class with multiple members and you want to provide a way to initialize all of them at once.

*/
class MyClass {
public:
    int x;
    double y;
    std::string z;

    MyClass(int a, double b, std::string c) : x(a), y(b), z(c) {}
};

int main() {
    // Scenario 1: Uniform Initialization
    int a{5};
    double b{3.14};
    std::string c{"Hello"};

    std::cout << "Scenario 1: Uniform Initialization" << std::endl;
    std::cout << "a: " << a << ", b: " << b << ", c: " << c << std::endl;

    // Scenario 2: Initializer List
    std::vector<int> numbers{1, 2, 3, 4, 5};

    std::cout << "\nScenario 2: Initializer List" << std::endl;
    std::cout << "numbers: ";
    for (const auto& num : numbers) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    // Scenario 3: Uniform Initialization with Class
    #include <string>

    MyClass obj{10, 2.71, "World"};

    std::cout << "\nScenario 3: Uniform Initialization with Class" << std::endl;
    std::cout << "obj.x: " << obj.x << ", obj.y: " << obj.y << ", obj.z: " << obj.z << std::endl;

    // Scenario 4: std::initializer_list
    std::initializer_list<int> nums = {6, 7, 8, 9, 10};
    std::list<int> numList = {6, 7, 8, 9, 10};


    std::cout << "\nScenario 4: std::initializer_list" << std::endl;
    std::cout << "nums: ";
    for (const auto& num : nums) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}