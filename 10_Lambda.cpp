#include <iostream>

int main()
{
    // Your code here
    // int a = 1;
    // int b = 12;
    // auto f = [&]()// this captures everyting external inside this function by reference
    // { a = 5;

    //     ++b;
    //  };
    // f();
    // std::cout << a<<std::endl;
    // std::cout << b<<std::endl;
    // int x = 0;
    // auto f = [x]() mutable
    // { std::cout << ++x <<std::endl; };
    // std::cout<<std::endl;
    // f();
    // f();
    // std::cout << x;


   int x = 0;
    auto f = [&x]() 
    { std::cout << ++x <<std::endl; };
    std::cout<<std::endl;
    f();
    f();
    std::cout << x;






    return 0;
}
