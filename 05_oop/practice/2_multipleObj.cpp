#include <iostream>
using namespace std;

class Car // here i created class, we always create it using class keyword
{
public:          // access specifier, members are accessible from outside
    string Name; // attribute
    int Model;
    int Price; // attribute
};
int main()
{
    Car farhanCar;
    farhanCar.Name = "Rolls Royce";
    farhanCar.Model = 2022;
    farhanCar.Price = 140000;

    Car car2;
    car2.Name = "Lamborgini";
    car2.Model = 2024;
    car2.Price = 12000;

    Car car3;
    car3.Name = "Buggati";
    car3.Model = 2025;
    car3.Price = 23000;

    cout << "I have " << farhanCar.Name << " which costs " << farhanCar.Price << " and its model is " << farhanCar.Model << endl;

    return 0;
}