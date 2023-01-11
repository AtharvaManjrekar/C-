#include <iostream>
using namespace std;
int main()
{
    int n,i,num,sum=0;
    cout<<"How many number do you want to enter?"<<endl;
    cin>>n;
    cout<<"Enter "<<n<< "numbers:\n ";
    for ( i = 0; i < n; i++)
    {
        cin>>num;
        sum=sum+num;
    }
    cout<<"\n The sum of "<<n<< "number entered is "<<sum;
    cout<<endl;
    return 0;
    
}