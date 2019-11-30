#include <iostream>

int main() 
{
    static_assert(1 + 1 == 2); //C++17
    std::cout << "Hello";
    std::cout << "correctly indented";
    std::cout << "world";
}
