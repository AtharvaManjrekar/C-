/* write a program called power which will take two arguments of type double (say x and n) and return the value of x raised to the
power of n */

#include<iostream>
using namespace std;
int power( double x , double n)              // x----> number ;  n----> power 
{
    int temp=x;
    int i= n;
    while(i!=1)
    {
        x = x * temp;
        i = i-1;
    } 
    return (double)x;
}
int main()
{
    double x,n;
    cout<<"Enter the number: ";
    cin>>x;
    cout<<"Enter the power of the number:";
    cin>>n;
    cout<<"Answer:"<<power(x,n)<<endl;
    return 0;
}