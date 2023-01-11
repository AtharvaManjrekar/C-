// write a function with two integers and return the sum of their product


#include <iostream>
using namespace std;
int add(int x , int y)
{
    int p,q,sum;
    p=x*x;
    q=y*y;
    sum=p+q;
    return sum;

}
int main()
{
 int a,b;
 cout<<"Enter the first number"<<endl;
 cin>>a;
 cout<<"Enter the second number"<<endl;
 cin>>b;
 cout<<"The function returned is "<<add(a,b);
 return 0;
}