#include <iostream>
using namespace std;
int add(int x,int y)
{
   int p,q,sum;
   p= x*x;
   q= y*y;
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
    cout<<"The function returned "<<add(a,b);
    return 0;
}