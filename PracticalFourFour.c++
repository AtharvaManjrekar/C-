/* write a program to interchnage the values of two integer numbers using friend functions */

#include <iostream>
#include<conio.h>
using namespace std;
class temp 
{
 int a, b, c;
 public:
 void input() ;
 friend void swap(temp &num);
 void display(); 
};
void temp :: input(){

 cout << "Enter a :";
 cin >> a;
 cout << "Enter b :";
 cin >>b;

}
void temp :: display(){
 cout << "After Swapping a is  :" <<a<<endl;
 cout << "After Swapping b is :" << b<<endl;
}
void swap(temp &num) 
{
    num.c = num.a;
    num.a = num.b;
    num.b = num.c;
}
int main() 
{
    temp num;
    num.input();
    swap(num);
    num.display();
    return 0;
}