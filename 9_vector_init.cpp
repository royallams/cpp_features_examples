#include <iostream>
#include <vector>



int main() {
    // Your code here
std::vector<int> v1 = {1, 2, 3};
std::vector<int> v2(5, 0);// Length 5, all elements 0
std::vector<int> v3{1, 2, 3};
// std::vector<int> v4(1, 2, 3);-- no comstructor for this
    return 0;
}