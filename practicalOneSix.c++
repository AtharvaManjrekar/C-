#include <iostream>
using namespace std;
int main()
{
    int num1 ,num2;
    int subtract;
    cout<<"Enter the value of num1"<<endl;             //keep num1 bigger than num2 to have positive answer //
    cin>>num1;
    cout<<"Enter the value of num2"<<endl;
    cin>>num2;
    subtract = num1 - num2;
    cout<<"The result of subtraction is  "<<subtract<<endl;
    return 0;
}