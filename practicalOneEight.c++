#include <iostream>
using namespace std;
int main()
{
    int n,r,sum=0,m=0;
    cout<<"Enter a number : "<<endl;
    cin>>n;
    m=n;
    int j=n/2;
    //cout<<j<<endl;
    int f=n%2;
    //cout<<f<<endl;
    for ( int i = 1; i<j; i++)
    {
        if(m!=i)
        {
            r=i*m;
            cout<<i<<"x "<<m<<"="<<r<<endl;
            m--;
        }
        sum=sum+r;
        //cout<<i<<endl;
        if(n%2==0)
        {
            cout<<"sum is 10 "<<sum;
        }
        else{
            cout<<j+1;
            cout<<"\n sum is "<<sum+j+1;
        }
    }
    return 0;
}