#include <iostream>
using namespace std;
int i;
class shoppy
{
private:
    int itemcode[50];
    float itemprice[50];
    int count;

    
public:
    void CNT()
    {
        count = 0;
    }
    void add_item();
    void remove_item();
    void display_item();
    void display_total();
};

void shoppy::add_item()
{
    cout<<"Enter item code \n -->";
    cin>>itemcode[count];
    cout<<"Enter item price \n -->";
    cin>>itemprice[count];
    count++;
}

void shoppy::remove_item()
{
    int rem;
    cout<<"Enter item code \n -->";
    cin>>rem;
    for ( i = 0; i < count; i++)
       if(itemcode[i]==rem)
       itemprice[i]=0;
       cout<<"Item of code "<<rem<<" is deleted sucessfully.\n";
    }
    
    void shoppy::display_item()
    {
        cout<<"code    price\n";
        for ( i = 0; i < count; i++)
        {
            cout<<itemcode[i]<< "                ";
            cout<<itemprice[i]<< "    \n";
        }
        
    }
    
    void shoppy::display_total()
    {
        int sum =0;
        cout<<"Your total bill is : ";
        for ( i = 0; i < count; i++)
        sum=sum + itemprice[i];
        cout<<"   "<<sum<<"-\n";
        
    }
    
    int main()
    {
    
    shoppy order1;
    order1.CNT();
    int a;
    while(1)
    {
        cout<<"\n Welcome to my Shopping site \n";
        cout<<"Please select your choice from below: \n";
        cout<<"Enter 1 to add item \n";
        cout<<"Enter 2 to remove item \n";
        cout<<"Enter 3 to display list of all items \n";
        cout<<"Enter 4 to display total price of item \n";
        cout<<"Enter 5 to exit \n";
        cin>>a;
        switch (a)
        {
        case 1 : order1.add_item();
                cout<<"Your item is sucessfully added!!"<<endl;
                 break;
        case 2 : order1.remove_item();
                 break;
        case 3 : order1.display_item();
                 break;
        case 4 : order1.display_total();
                 break;
        case 5 : cout<<"\n thank you please visit again!!";
                 exit(1);
                 break;
        }
        
    }

    return 0;

}
