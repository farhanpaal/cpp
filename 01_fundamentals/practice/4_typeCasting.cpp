#include<iostream>
int main(){
    int a=56;
    std::cout<<float(a);

}

/*
Expression	    Result	    Why
5 / 2	        2	    int / int → integer division
5 / 2.0	        2.5	    int promoted to double
5.0 / 2	        2.5	    int promoted to double
float(5 / 2)	2	    division happens first
float(5) / 2	2.5	    casting before division
*/