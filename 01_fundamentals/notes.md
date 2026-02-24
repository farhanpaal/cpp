## Topics to cover
- C++ Program Structure
- Program Structure
- Namespaces

        #include <iostream>
        namespace farhan{
            int age=55;
        }

        namespace burhan{
            int age=25;
        }
        int main(){
            std::cout<<farhan::age;
            return 0;
        }
        :: → Scope Resolution Operator
 
        A namespace in C++ is a declarative region that provides a scope to identifiers like variables, functions, and classes to avoid naming conflicts.


        prefer it: if we have large program with 10+ files, many functions and modules
            when working in teams:
                You create log()
                Your teammate also creates log()
                Without namespace →  Conflict
                With namespace → No problem
                teamA::log();
                teamB::log();

        The reason we avoid using namespace std; in real-world projects is: It can cause naming conflicts.

        The std Namespace
        All standard C++ library features belong to std.
        Examples:
            std::cout
            std::cin
            std::string
            std::vector
        When you write:
            using namespace std;
            You are importing everything from std.

        Using Scope Resolution Operator (Best Practice)
            std::cout << "Hello";

            Using Specific Members (Safer Alternative)
                using std::cout;
                using std::endl;


        if namespace name is long:
            namespace veryLongNamespaceName {
                int x = 50;
            }
            namespace v = veryLongNamespaceName;
            int main() {
                std::cout << v::x;
            }
```

- Data Types 
            Data types in C/C++ specify what kind of data a variable can store, how much memory it occupies, the range of values it can hold, and what operations can be performed on it. They are important because computers store everything in binary, and the data type tells the compiler how to interpret those bits correctly.

            Basic (primitive) data types include int, float, double, char, and bool (in C++). An int is used to store whole numbers and usually occupies 4 bytes. A float stores decimal values with single precision (around 6–7 digits). A double also stores decimal values but with double precision (around 15–16 digits) and typically occupies 8 bytes. A char stores a single character and usually takes 1 byte. A bool stores logical values such as true or false.

            Each data type has a specific range based on its size. For example, a 32-bit signed integer can store values from −2,147,483,648 to 2,147,483,647. If a value exceeds this range, overflow occurs. Overflow means the value wraps around because the allocated memory cannot represent numbers beyond its limit.

            Signed and unsigned types differ in how they handle numbers. A signed type can store both positive and negative values, while an unsigned type stores only non-negative values. For example, an unsigned 32-bit integer has a range from 0 to 4,294,967,295. If a negative number is assigned to an unsigned variable, it wraps around using modulo arithmetic and produces a large positive value.
            

- Type Casting
- Input / Output (cin, cout)
- Operators : Operators in C++ are symbols that perform operations on variables and values.

    Arithmetic: + - * / %
    Relational: == != > < >= <=
    Logical: && || !
    Assignment: = += -= *= /= %=
    Increment/Decrement: ++ --
    Bitwise: & | ^ ~ << >>
    Conditional (ternary): ?:
    
- Control Statements (if, switch, loops)
- Functions
- Inline Functions 
- Default Arguments 
- Function Overloading
- Struct