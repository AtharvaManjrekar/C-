#include <iostream>
using namespace std;
int power(double x , double n)
{
    int temp = x;
    int i = n;
    while (i!= 1)
    {
       x = x*temp;
       i = i-1;
    }
    return (double)x;
}
int main()
{
  double x,n;
  cout<<"Enter the number : "<<endl;
  cin>>x;
  cout<<"Enter the power of number entered :"<<endl;
  cin>>n;
  cout<<"Answer : "<<power(x,n)<<endl;
  return 0;
}