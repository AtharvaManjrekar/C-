/* Write a program to take n integers from user (where n is input from user) and print sum of product (product of first number and
last number added to product of second number and second last number and so on....)    */

#include <iostream>
using namespace std;
int main()
{
    int n,r,sum=0,m=0;

    cout<<"Enter the numbers: ";
    cin>>n;
    m=n;
    int j = n/2;
    cout<<j<<endl;
    int f = n%2;
    cout<<f<<endl;
    for(int i=1;i<j;i++)
    {
        if(m!=i)
        {
        r=i*m;
        cout<<i<<"X"<<m<<"="<<r<<endl;
        m--;
    }
    sum=sum+r;
    if(n%2==0)
    {
        cout<<"Sum is 10"<<sum;
    }
    else
    {
    cout<<j+1;
    cout<<"\n sum is "<<sum+j+1;
        }
    }
        return 0;
}