#include <iostream>

int add(int a, int b=8) // default argument
{
    return a + b;
}

int main()
{
    std::cout << "Practicing functions \n";
    std::cout << add(4);
}