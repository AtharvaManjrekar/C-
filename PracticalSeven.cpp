#include <iostream>
#include <cstring>
#include <string.h>

using namespace std;

class media
{
    public:
    string title;
    float price;

    media(string s,float a)
    {
        title = s;
        price = a;
    }
    
    virtual void display() {}
};

class Book:public media
{
    public:
    int pages;

    Book(string s,float a,int p) :media(s,a)
    {
        pages = p;
    }
    
    void display()
    {
        cout<<"Book Title Is                    : "<<title<<endl;
        cout<<"Total Pages On Book is           : "<<pages<<endl;
        cout<<"Price                            : "<<price<<endl;
        cout<<"\n\n";
    }
};

class Tapes:public media
{
    public:
    int time;

    Tapes(string s, float a,float t):media(s,a)
    {
        time = t;
    }
    
    void display()
    {
        cout<<"Tape Title Is                    : "<<title<<endl;
        cout<<"Tape Playing Time Is             : "<<time<<endl;
        cout<<"Price                            : "<<price<<endl;
        cout<<"\n\n";
    }
};

int main()
{
    char *title = new char [30];
    float price, time;
    int pages;


    cout<<"\n ENTER BOOK DETAILS \n";
    cout<<" Title : ";
    cin>>title;
    cout<<" Price : ";
    cin>>price;
    cout<<" Pages : ";
    cin>>pages;
    Book b(title,price,pages);

    cout<<"\n ENTER TAPE DETAILS \n";
    cout<<" Title : ";
    cin>>title;
    cout<<" Price : ";
    cin>>price;
    cout<<" Playing time (mins) : ";
    cin>>time;
    Tapes c(title,price,time);

    media *x[2];

    x[0]= &b;
    x[1]= &c;

    cout<<".... Book Details ...."<<endl;
    x[0]->display();

    cout<<".... Tape Details ...."<<endl;
    x[1]->display();




    
    return 0;
}
