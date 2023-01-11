#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <iomanip>
#include <vector>
#include <string>

using namespace std;

struct customer
{
    string name;
    int cust_id;
};

customer c;

void enter_data()
{
    fstream fout;
    fout.open("customer.csv",ios::cout | ios::app);
    int n,i;
    cout<<"Enter the no of customer: ";
    cin>>n;
    for ( i = 0; i < n; i++)
    {
        cout<<"Enter name of customer: ";
        cin>>c.name;
        cout<<"Enter customer id :";
        cin>>c.cust_id;

        fout<<c.name <<" ,";
    }
fout.close();
cout<<endl
    <<"Data added.........\n\n\n";
} 
void show_all()
{
    fstream fin;
    fin.open("customer.csv",ios::in);
    string content;
    while (fin.eof()==0)
    {
        getline(fin,content);
        cout<<content<<endl;
    }
    fin.close();
    
}

void search_display(string search_term)
{
    vector<sting> record;
    fstream fin;
    fin.open("customer.csv",ios::in);
    int found =0;
    

}


int main () 
{ 

    
    return 0;
}