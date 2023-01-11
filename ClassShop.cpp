#include <iostream>
using namespace std;
class shoppy 
{
    private:
    int Item_Price[50];
    char Item_Code[50];
    int count;

    public:
    void CNT()
    {
        count=0;
    }
    void add_item();
    void delete_item();
    void display_item();
    void display_total();

};

void shoppy :: add_item()
{
    cout<<"Enter Item Code of the item:- "<<endl;
    cin>>Item_Code[count];
    cout<<"Enter the price of the item:-"<<endl;
    cin>>Item_Price[count];
    count++;
}

void shoppy :: delete_item()
{
    int rem;
    cout<<"Enter the item code of object you want to delete;-";
    cin>>rem;
    for (int i = 0; i < count; i++)
    
       if (Item_Code[i]==rem)
           Item_Price[i]=0;
           
           cout<<"Item of code "<<rem<<" is deleted successfully.\n";
       
    
}

void shoppy :: display_item()
{
  cout<<"Code price \n";
  for ( int  i = 0; i < count; i++)
  {
      cout<<Item_Code[i]<<"                                                                        ";
      cout<<Item_Price[i]<<"                                      \n";
  }
}

void shoppy :: display_total()
{
    int sum=0;
    cout<<"Your total ammount to pay is ";
    for ( int i = 0; i < count; i++)
    {
       sum = sum + Item_Price[i];
       cout<<"      "<<sum<<"  \n";
    }
}

int main()
{
    shoppy order1;
    order1.CNT();
    int a;
    while (1)
    {
          cout<<"Welcome TO GPM Store."<<endl;
          cout<<"Please select your choice.\n";
          cout<<"1. Eneter 1 to add item."<<endl;
          cout<<"2. Enter 2 to delete item."<<endl;
          cout<<"3. Enter 3 to display item."<<endl;
          cout<<"4. Enter 4 to display total"<<endl;
          cout<<"5. Enter 5 to exit."<<endl;
          cin>>a;
          switch (a)
          {
              case 1: order1.add_item();
                     cout<<"Your Item is sucessfully added in the list.";
                     break;
            case 2: order1.delete_item();
                     break;
            case 3: order1.display_item();
                     break;
            case 4: order1.display_total();
                     break;
            case 5: cout<<"Thank You! Please visit again!!";
                     exit(1);
                     break;
            
          }
    }
    return 0;
    
}