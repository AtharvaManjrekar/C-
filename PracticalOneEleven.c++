#include <iostream>
using namespace std;
long factorial(long a)
{
    long fact = 1;
    for ( long i = 1; i <=a; i++)
    {
        fact*=i;
    }
       return fact;
}
int main()
{
    long a;
    cout<<"Enter the number : "<<endl;
    cin>>a;
    cout<<"Factorial of number "<<a<<" is "<<factorial(a)<<endl;
    return 0;
}