#include <iostream>
using namespace std;

int main () 
{
    int a = 3;
    // & --> this operator is address operator 
    int *b;
    b = &a;
    cout<<"The address of A is "<<b<<endl; 
    cout<<"The address of A is "<<&a<<endl;

    // * --> this operator is dereference operator
    cout<<"The value saved at position B is "<<*b<<endl;
    
    // pointer to pointer concept

    int **c = &b;
    cout<<"The address of B is "<<c<<endl;
    cout<<"The address of B is "<<&b<<endl;
    cout<<"The value at address of B is "<<*c<<endl;
    cout<<"The value at address of address of B is "<<**c<<endl;
    return 0;
}