#include <iostream>
#include <iomanip>      // for setprecision

int main() {

    // Integer type (typically 4 bytes)
    int a = 23;

    // Floating point (single precision, typically 4 bytes)
    float b = 23.45f;

    // Character type (1 byte, stores ASCII value)
    char c = 'A';

    // Double precision floating point (typically 8 bytes)
    double d = 12345.2343;

    // Boolean type (stores true or false)
    bool e = false;

    // Short integer (typically 2 bytes)
    short int f = 5;

    // Long integer (4 bytes on most systems, 8 on some)
    long int g = 45534;

    // Long long integer (typically 8 bytes)
    long long int h = 32434534;

    // Extended precision floating point
    long double i = 2345.235;

    // Set floating precision for better output visibility
    std::cout << std::fixed << std::setprecision(10);

    std::cout << "Values:\n";
    std::cout << "int a = " << a << "\n";
    std::cout << "float b = " << b << "\n";
    std::cout << "char c = " << c << " (ASCII: " << int(c) << ")\n";
    std::cout << "double d = " << d << "\n";
    std::cout << "bool e = " << e << "\n";
    std::cout << "short f = " << f << "\n";
    std::cout << "long g = " << g << "\n";
    std::cout << "long long h = " << h << "\n";
    std::cout << "long double i = " << i << "\n\n";

    std::cout << "Sizes (in bytes):\n";
    std::cout << "int: " << sizeof(int) << "\n";
    std::cout << "float: " << sizeof(float) << "\n";
    std::cout << "char: " << sizeof(char) << "\n";
    std::cout << "double: " << sizeof(double) << "\n";
    std::cout << "bool: " << sizeof(bool) << "\n";
    std::cout << "short: " << sizeof(short) << "\n";
    std::cout << "long: " << sizeof(long) << "\n";
    std::cout << "long long: " << sizeof(long long) << "\n";
    std::cout << "long double: " << sizeof(long double) << "\n\n";

    
    return 0;
}