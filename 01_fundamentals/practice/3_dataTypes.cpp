#include <iostream>
#include <iomanip> // for setprecision
using namespace std;

 

int main()
{

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
    cout << fixed << setprecision(10);

    cout << "Values:\n";
    cout << "int a = " << a << "\n";
    cout << "float b = " << b << "\n";
    cout << "char c = " << c << " (ASCII: " << int(c) << ")\n";
    cout << "double d = " << d << "\n";
    cout << "bool e = " << e << "\n";
    cout << "short f = " << f << "\n";
    cout << "long g = " << g << "\n";
    cout << "long long h = " << h << "\n";
    cout << "long double i = " << i << "\n\n";

    cout << "Sizes (in bytes):\n";
    cout << "int: " << sizeof(int) << "\n";
    cout << "string: " << sizeof(string) << "\n";
    cout << "float: " << sizeof(float) << "\n";
    cout << "char: " << sizeof(char) << "\n";
    cout << "double: " << sizeof(double) << "\n";
    cout << "bool: " << sizeof(bool) << "\n";
    cout << "short: " << sizeof(short) << "\n";
    cout << "long: " << sizeof(long) << "\n";
    cout << "long long: " << sizeof(long long) << "\n";
    cout << "long double: " << sizeof(long double) << "\n\n";

    return 0;
}