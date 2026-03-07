# C++ Object-Oriented Programming (OOP)

## Topics to Cover
- Class & Object
- Constructors
- Destructors
- Access Modifiers
- `this` Pointer
- Static Members
- Inheritance (basic)
- Polymorphism (basic idea)

## What is OOP?

**OOP** stands for **Object-Oriented Programming**.

Object-oriented programming is about creating "objects", which can hold data and functions that work on that data.

### Advantages of OOP
- Provides a clear structure to programs
- Makes code easier to maintain, reuse, and debug
- Helps keep your code DRY (Don't Repeat Yourself)
- Makes it possible to create full reusable applications with less code and shorter development time

> **Tip:** The DRY principle means you should avoid writing the same code more than once. Move repeated code into functions or classes and reuse it.

## Classes and Objects

**Classes** and **objects** are the two main aspects of object-oriented programming.

- A **class** defines what an object should look like
- An **object** is created based on that class

| Class | Objects |
|-------|---------|
| Fruit | Apple, Banana, Mango |
| Car | Volvo, Audi, Toyota |

When you create an object from a class, it inherits all the variables and functions defined inside that class.

### Procedural vs Object-Oriented Programming

| Aspect | Procedural | Object-Oriented |
|--------|-----------|-----------------|
| Focus | Functions that operate on data | Objects containing data and functions |
| Organization | Around functions | Around objects |

## C++ Classes/Objects

Everything in C++ is associated with classes and objects, along with its attributes and methods.

**Example:** In real life, a car is an object. The car has:
- **Attributes:** weight, color
- **Methods:** drive, brake

**Class members:** Attributes and methods are the class members.

A **class** is a user-defined data type that works as an object constructor, or a "blueprint" for creating objects.

### Create a Class

Use the `class` keyword:

```cpp
class MyClass {       // The class
    public:             // Access specifier
        int myNum;        // Attribute (int variable)
        string myString;  // Attribute (string variable)
};
```

**Explanation:**
- `class` keyword creates a class called `MyClass`
- `public` keyword is an access specifier (members are accessible from outside)
- `myNum` and `myString` are attributes
- End with a semicolon `;`

### Create an Object

To create an object, specify the class name, followed by the object name:

```cpp
class MyClass {
    public:
        int myNum;
        string myString;
};

int main() {
    MyClass myObj;  // Create an object

    // Access and set attributes
    myObj.myNum = 15;
    myObj.myString = "Some text";

    // Print values
    cout << myObj.myNum << "\n";
    cout << myObj.myString;
    return 0;
}
```

### Multiple Objects

```cpp
class Car {
    public:
        string brand;
        string model;
        int year;
};

int main() {
    Car carObj1;
    carObj1.brand = "BMW";
    carObj1.model = "X5";
    carObj1.year = 1999;

    Car carObj2;
    carObj2.brand = "Ford";
    carObj2.model = "Mustang";
    carObj2.year = 1969;

    cout << carObj1.brand << " " << carObj1.model << " " << carObj1.year << "\n";
    cout << carObj2.brand << " " << carObj2.model << " " << carObj2.year << "\n";
    return 0;
}
```

### Challenge Task

Create a `Book` class with attributes: `title`, `author`, `year`. Create two objects and print their values.

**Expected Output:**
```
Matilda, Roald Dahl, 1988
The Giving Tree, Shel Silverstein, 1964
```

**Solution:**
```cpp
#include <iostream>
#include <string>
using namespace std;

class Book {
    public:
        string title;
        string author;
        int year;
};

int main() {
    Book book1;
    book1.title = "Matilda";
    book1.author = "Roald Dahl";
    book1.year = 1988;

    Book book2;
    book2.title = "The Giving Tree";
    book2.author = "Shel Silverstein";
    book2.year = 1964;

    cout << book1.title << ", " << book1.author << ", " << book1.year << "\n";
    cout << book2.title << ", " << book2.author << ", " << book2.year;
    return 0;
}
```

## Class Methods

**Methods** are functions that belong to the class.

Two ways to define methods:
1. Inside class definition
2. Outside class definition

### Method Inside the Class

```cpp
class MyClass {
    public:
        void myMethod() {
            cout << "Hello World!";
        }
};

int main() {
    MyClass myObj;
    myObj.myMethod();
    return 0;
}
```

### Method Outside the Class

```cpp
class MyClass {
    public:
        void myMethod();  // Declaration
};

// Definition outside
void MyClass::myMethod() {
    cout << "Hello World!";
}

int main() {
    MyClass myObj;
    myObj.myMethod();
    return 0;
}
```

### Methods with Parameters

```cpp
class Car {
    public:
        int speed(int maxSpeed);
};

int Car::speed(int maxSpeed) {
    return maxSpeed;
}

int main() {
    Car myObj;
    cout << myObj.speed(200);
    return 0;
}
```

### Challenge Task

Create a `Dog` class with a `bark()` method that prints "Woof!". Call it from `main()`.

**Solution:**
```cpp
#include <iostream>
using namespace std;

class Dog {
    public:
        void bark() {
            cout << "Woof!";
        }
};

int main() {
    Dog myDog;
    myDog.bark();
    return 0;
}
```

## Constructors

A **constructor** is a special method automatically called when an object is created.

Use the same name as the class, followed by `()`:

```cpp
class MyClass {
    public:
        MyClass() {  // Constructor
            cout << "Hello World!";
        }
};

int main() {
    MyClass myObj;  // Constructor is called automatically
    return 0;
}
```

### Constructor Rules
- Same name as the class
- No return type (not even `void`)
- Usually declared `public`
- Automatically called when an object is created

### Constructor with Parameters

```cpp
class Car {
    public:
        string brand;
        string model;
        int year;

        Car(string x, string y, int z) {
            brand = x;
            model = y;
            year = z;
        }
};

int main() {
    Car carObj1("BMW", "X5", 1999);
    Car carObj2("Ford", "Mustang", 1969);

    cout << carObj1.brand << " " << carObj1.model << " " << carObj1.year << "\n";
    cout << carObj2.brand << " " << carObj2.model << " " << carObj2.year << "\n";
    return 0;
}
```

### Constructor Outside the Class

```cpp
class Car {
    public:
        string brand;
        string model;
        int year;
        Car(string x, string y, int z);  // Declaration
};

// Definition outside
Car::Car(string x, string y, int z) {
    brand = x;
    model = y;
    year = z;
}

int main() {
    Car carObj1("BMW", "X5", 1999);
    Car carObj2("Ford", "Mustang", 1969);

    cout << carObj1.brand << " " << carObj1.model << " " << carObj1.year << "\n";
    cout << carObj2.brand << " " << carObj2.model << " " << carObj2.year << "\n";
    return 0;
}
```

### Why Constructors Are Useful

Constructors run automatically when you create an object. They set things up so everything is ready right away.

**Analogy:** When you order a pizza (object), the constructor is the chef who adds the sauce, cheese, and toppings before it gets to you—you don't have to do it yourself!

## Constructor Overloading

You can have multiple constructors in the same class with different parameters.

**Why use it?**
- Give flexibility when creating objects
- Set default or custom values
- Reduce repetitive code

### Example

```cpp
class Car {
    public:
        string brand;
        string model;

        Car() {
            brand = "Unknown";
            model = "Unknown";
        }

        Car(string b, string m) {
            brand = b;
            model = m;
        }
};

int main() {
    Car car1;
    Car car2("BMW", "X5");
    Car car3("Ford", "Mustang");

    cout << "Car1: " << car1.brand << " " << car1.model << "\n";
    cout << "Car2: " << car2.brand << " " << car2.model << "\n";
    cout << "Car3: " << car3.brand << " " << car3.model;
    return 0;
}
```

**Output:**
```
Car1: Unknown Unknown
Car2: BMW X5
Car3: Ford Mustang
```

## Destructors

A **destructor** is a special method automatically called when an object is destroyed or goes out of scope.

Use the tilde `~` followed by the class name:

```cpp
class MyClass {
    public:
        MyClass() {
            cout << "Constructor called\n";
        }
        ~MyClass() {  // Destructor
            cout << "Destructor called\n";
        }
};

int main() {
    MyClass myObj;
    return 0;  // Destructor is called here
}
```

**Output:**
```
Constructor called
Destructor called
```

### Destructor Rules
- Same name as the class with `~` prefix
- No return type (not even `void`)
- No parameters
- Usually declared `public`
- Automatically called when object goes out of scope

### Why Use Destructors?

Destructors are useful for cleaning up resources:
- Closing files
- Freeing memory
- Releasing database connections

### Example with Resource Cleanup

```cpp
class File {
    private:
        string filename;
    public:
        File(string name) {
            filename = name;
            cout << "File " << filename << " opened\n";
        }
        ~File() {
            cout << "File " << filename << " closed\n";
        }
};

int main() {
    File myFile("data.txt");
    return 0;
}
```

**Output:**
```
File data.txt opened
File data.txt closed
```

## Access Modifiers

Access modifiers control how class members (attributes and methods) can be accessed.

### Three Access Modifiers

| Modifier | Accessibility |
|----------|---------------|
| `public` | Accessible from outside the class |
| `private` | Cannot be accessed from outside the class |
| `protected` | Cannot be accessed from outside, but accessible in inherited classes |

### Private Members

```cpp
class MyClass {
    public:
        int x;     // Public
    private:
        int y;     // Private
};

int main() {
    MyClass myObj;
    myObj.x = 25;  // Allowed
    myObj.y = 50;  // Error: private member
    return 0;
}
```

> **Tip:** Declare class attributes as `private` when possible. This reduces the possibility of code errors.

> **Note:** By default, all members are `private` if no specifier is given.

### Protected Members

Members declared as `protected` cannot be accessed from outside but can be accessed in child classes (inherited classes).

### Real-Life Analogy

- **Public:** Front door of your house—anyone can come in
- **Private:** Locked drawer—only the owner can open it
- **Protected:** Family-only room—children (subclasses) can enter, others cannot

## The `this` Pointer

The **`this` pointer** is a pointer that points to the current object.

Every member function has a hidden `this` pointer that refers to the object on which the function was called.

### Using `this` to Access Members

```cpp
class Car {
    public:
        string brand;

        void setBrand(string brand) {
            this->brand = brand;  // this->brand refers to the member variable
        }

        void printBrand() {
            cout << "Brand: " << this->brand;
        }
};

int main() {
    Car mycar;
    mycar.setBrand("BMW");
    mycar.printBrand();
    return 0;
}
```

**Output:**
```
Brand: BMW
```

### Why Use `this`?

- Distinguish member variables from local variables with the same name
- Return a reference to the current object
- Explicitly show you're accessing class members

### Returning `this`

```cpp
class Number {
    public:
        int value;

        Number& add(int n) {
            value += n;
            return *this;  // Return reference to current object
        }

        void print() {
            cout << value << " ";
        }
};

int main() {
    Number num;
    num.value = 5;
    num.add(3).add(2).add(1);  // Method chaining
    num.print();
    return 0;
}
```

**Output:**
```
11
```

## Static Members

**Static members** belong to the class itself, not to individual objects.

All objects share the same static member. Static members are initialized only once.

### Static Variables

```cpp
class Counter {
    public:
        static int count;  // Declaration

        Counter() {
            count++;
        }
};

int Counter::count = 0;  // Definition and initialization

int main() {
    Counter c1;
    Counter c2;
    Counter c3;

    cout << "Count: " << Counter::count;
    return 0;
}
```

**Output:**
```
Count: 3
```

All objects share the same `count` variable.

### Static Functions

A **static function** can be called without creating an object. It can only access static members:

```cpp
class Math {
    public:
        static int add(int a, int b) {
            return a + b;
        }
};

int main() {
    int result = Math::add(10, 20);
    cout << "Result: " << result;
    return 0;
}
```

**Output:**
```
Result: 30
```

### Static Member Rules

- Declared with `static` keyword
- Defined and initialized outside the class
- Accessed using `ClassName::memberName`
- Shared across all objects
- Initialized only once

### Practical Example

```cpp
class Student {
    private:
        string name;
        static int totalStudents;

    public:
        Student(string n) {
            name = n;
            totalStudents++;
        }

        static int getTotalStudents() {
            return totalStudents;
        }
};

int Student::totalStudents = 0;

int main() {
    Student s1("Alice");
    Student s2("Bob");
    Student s3("Charlie");

    cout << "Total Students: " << Student::getTotalStudents();
    return 0;
}
```

**Output:**
```
Total Students: 3
```

## Encapsulation

**Encapsulation** means hiding "sensitive" data from users.

To achieve this:
1. Declare class variables as `private`
2. Provide public `get` and `set` methods to access/modify them

### Real-Life Example

Think of an employee's salary:
- The salary is **private**—the employee can't change it directly
- Only the manager can **update** or **share** it when appropriate

### Access Private Members

Use public "getter" and "setter" methods:

```cpp
class Employee {
    private:
        int salary;

    public:
        // Setter
        void setSalary(int s) {
            salary = s;
        }
        // Getter
        int getSalary() {
            return salary;
        }
};

int main() {
    Employee myObj;
    myObj.setSalary(50000);
    cout << myObj.getSalary();
    return 0;
}
```

### Why Encapsulation?

- Better control of data
- Change one part of code without affecting others
- Increased data security

## Friend Functions

A **friend function** is not a class member, but it's allowed to access the class's private data.

```cpp
class Employee {
    private:
        int salary;

    public:
        Employee(int s) {
            salary = s;
        }

        // Declare friend function
        friend void displaySalary(Employee emp);
};

void displaySalary(Employee emp) {
    cout << "Salary: " << emp.salary;
}

int main() {
    Employee myEmp(50000);
    displaySalary(myEmp);
    return 0;
}
```

**Explanation:**
- `displaySalary()` is declared as a friend inside the class
- Even though it's not a member, it can access private members
- Called normally from `main()`

## Inheritance

**Inheritance** allows one class to reuse attributes and methods from another class.

### Terminology

- **Derived class (child):** The class that inherits
- **Base class (parent):** The class being inherited from

Use the `:` symbol to inherit:

```cpp
// Base class
class Vehicle {
    public:
        string brand = "Ford";
        void honk() {
            cout << "Tuut, tuut! \n";
        }
};

// Derived class
class Car : public Vehicle {
    public:
        string model = "Mustang";
};

int main() {
    Car myCar;
    myCar.honk();
    cout << myCar.brand + " " + myCar.model;
    return 0;
}
```

### Why Use Inheritance?

- **Code reusability:** Reuse attributes and methods of existing classes
- Cleaner, more efficient code
- Avoid duplication

## Multilevel Inheritance

A class can be derived from a class that is already derived from another class.

```cpp
// Base class
class MyClass {
    public:
        void myFunction() {
            cout << "Some content in parent class.";
        }
};

// Derived class
class MyChild : public MyClass {
};

// Derived class (grandchild)
class MyGrandChild : public MyChild {
};

int main() {
    MyGrandChild myObj;
    myObj.myFunction();
    return 0;
}
```

## Multiple Inheritance

A class can inherit from multiple base classes:

```cpp
// Base class 1
class MyClass {
    public:
        void myFunction() {
            cout << "Some content in parent class.";
        }
};

// Base class 2
class MyOtherClass {
    public:
        void myOtherFunction() {
            cout << "Some content in another class.";
        }
};

// Derived class
class MyChildClass : public MyClass, public MyOtherClass {
};

int main() {
    MyChildClass myObj;
    myObj.myFunction();
    myObj.myOtherFunction();
    return 0;
}
```

## Protected Access in Inheritance

The `protected` access specifier can be accessed in inherited classes but not from outside:

```cpp
// Base class
class Employee {
    protected:
        int salary;
};

// Derived class
class Programmer : public Employee {
    public:
        int bonus;

        void setSalary(int s) {
            salary = s;
        }

        int getSalary() {
            return salary;
        }
};

int main() {
    Programmer myObj;
    myObj.setSalary(50000);
    myObj.bonus = 15000;

    cout << "Salary: " << myObj.getSalary() << "\n";
    cout << "Bonus: " << myObj.bonus << "\n";
    return 0;
}
```

## Polymorphism

**Polymorphism** means "many forms". It occurs when many classes are related by inheritance.

Inheritance lets us inherit attributes and methods. **Polymorphism** uses those methods to perform different tasks.

### Example

Imagine a base class `Animal` with a method `makeSound()`. Different animals sound different:

- **Pig:** wee wee
- **Dog:** bow wow
- **Bird:** tweet tweet

The same action (making a sound) behaves differently for each animal.

### Basic Polymorphism

```cpp
// Base class
class Animal {
    public:
        void animalSound() {
            cout << "The animal makes a sound \n";
        }
};

// Derived class
class Pig : public Animal {
    public:
        void animalSound() {
            cout << "The pig says: wee wee \n";
        }
};

// Derived class
class Dog : public Animal {
    public:
        void animalSound() {
            cout << "The dog says: bow wow \n";
        }
};

int main() {
    Animal myAnimal;
    Pig myPig;
    Dog myDog;

    myAnimal.animalSound();
    myPig.animalSound();
    myDog.animalSound();
    return 0;
}
```

### Why Use Polymorphism?

- Code reusability
- Flexibility when working with inherited classes
- Cleaner, more maintainable code

## Virtual Functions

A **virtual function** is a member function in the base class that can be overridden in derived classes.

Virtual functions are key to polymorphism in C++. They let different objects respond differently to the same function call.

### Without Virtual Function

```cpp
class Animal {
    public:
        void sound() {
            cout << "Animal sound\n";
        }
};

class Dog : public Animal {
    public:
        void sound() {
            cout << "Dog barks\n";
        }
};

int main() {
    Animal* a;
    Dog d;
    a = &d;
    a->sound();  // Outputs: Animal sound (wrong!)
    return 0;
}
```

Even though `a` points to a `Dog`, it calls `Animal::sound()` because the function is not virtual.

### With Virtual Function

```cpp
class Animal {
    public:
        virtual void sound() {
            cout << "Animal sound\n";
        }
};

class Dog : public Animal {
    public:
        void sound() override {
            cout << "Dog barks\n";
        }
};

int main() {
    Animal* a;
    Dog d;
    a = &d;
    a->sound();  // Outputs: Dog barks (correct!)
    return 0;
}
```

Now it works! Because `sound()` is virtual, it calls the actual object's function.

### Virtual Function Guidelines

- Use `virtual` **only** in the base class
- Use `override` (optional but recommended) in the derived class for clarity

### The Arrow Operator `->`

The `->` operator accesses members through a pointer. It's a shortcut for `(*pointer).member`:

```cpp
Animal* a = new Animal();
a->sound();        // Same as (*a).sound()
```

> **Tip:** If using a pointer to an object, use `->` to access its members.

