// A destructor is a special method automatically called when an object is destroyed or goes out of scope.

// constructor: acquire resources, destructor: release resources
// Destructor has same name as the class with ~ prefix

// It is not necessary to write destrucor manually, compiler automatically creates a default destructor for class, but sometimes we need it  espicailly when class manages resources like dynamic memory, files, database connections etc

#include <iostream>
using namespace std;
class File
{
private:
    string filename;

public:
    File(string name)
    {
        filename = name;
        cout << "File " << filename << " opened\n";
    }
    ~File()
    {
        cout << "File " << filename << " closed\n";
    }
};

int main()
{
    File myFile("data.txt");
    return 0;
}