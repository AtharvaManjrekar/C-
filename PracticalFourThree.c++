#include<iostream>
using namespace std;

class book
{
    private:
        string title;
        string author;
        string publication;
        int price;

    public:
        void getinfo();
        void printinfo();
};
void book :: getinfo()
{
    cout << "Enter the title: ";
    cin >> title;
    cout << "Enter the author: ";
    cin >> author;
    cout << "Enter the publication: ";
    cin >> publication;
    cout << "Enter the price: ";
    cin >> price;
    cout << endl;
};
void book :: printinfo()
{
    cout << "Name of book = " << title << endl;
    cout << "Author of book = " << author << endl;
    cout << "Publication of book = " << publication<< endl;
    cout << "Price of book = " << price << endl;
    cout << endl;
}
int main()
{
    
    book b[5];
    cout << "Enter the details of the book:\n";
    for(int i = 0; i <= 4; i++)
        b[i].getinfo();
    
    cout << "The details of the book are as follows:\n";
    for(int i = 0; i <= 4; i++)
        b[i].printinfo();
 
    return 0;
}