/*1.Define a class to represent a bank account. Include the following members:
data member: Name of the depositor,Account Number,Type of account, balance amount.
Member Functions:
1)To assign initial values
2)To deposit an amount
3)To withdraw an amount after checking the balance
4)To display name & balance
write a main program to test the program */

#include <iostream>

using namespace std;

class Bank_account
{
private:
   char Name [30];
   int Account_no; 
   string TypeOfAccount;
   double balance_Ammount;
public:
   void To_initialize();
   void Deposit();
   void withdraw();
   void display();
};

void Bank_account :: To_initialize()
{
   int a,b;

   cout<<"Please Enter Account Holder name    :  ";
   gets(Name);

  a = (double)rand() / (RAND_MAX + 1) * (99999999999 - 1000000001)+ 1000000001;
  

   Account_no = a;

   cout<<"Account number                      :  "<<Account_no<<endl<<endl;

   cout<<"TYPES OF ACCOUNTS"<<endl;
   cout<<"Sr no          TYPE              Rate of intrest"<<endl;
   cout<<"  1.      Saving Account               5%       "<<endl;
   cout<<"  2.      Current Account              3%       "<<endl;
   cout<<"  3.      Fixed Deposit Account        7%       "<<endl;

   cout<<"\n\n";

   cout<<"Select Your Choice"<<endl;
   cin>>b;


   switch (b)
   {
   case 1 :
      cout<<"You have selected Saving account"<<endl;
      TypeOfAccount = "Saving account with 5 percent rate of intrest";
      break;

   case 2 :
      cout<<"You have selected current account"<<endl;
      TypeOfAccount = "Current account with 3 percent rate of intrest";
      break;
   case 3 :
      cout<<"You have selected Fixed deposit account"<<endl;
      TypeOfAccount = "Fixed Deposite account with 3 percent rate of intrest";
      break;
   default:
      cout<<"Please select correct choise"<<endl;
      break;
   }

   balance_Ammount = 0;
   
   cout<<"Your balance is "<<balance_Ammount<<" ruppess"<<endl;

}

void Bank_account :: Deposit()
{
   double m;
   int account_no;

   cout<<" Please Enter your account no to deposit amount : "<<endl;
   cin>>account_no;

   if (account_no != Account_no)
   {
      cout<<"Please enter correct account no"<<endl;
   }
   else
   {
      cout<<"Your current balance is "<<balance_Ammount<<endl;
      cout<<"Please enter the amount to deposit "<<endl;
      cin>>m;

      balance_Ammount += m;

      cout<<"Your new balance is "<<balance_Ammount<<endl;

   }

}

void Bank_account :: withdraw()
{
   double m;
   int account_no;

   cout<<" Please Enter your account no to withdraw amount : "<<endl;
   cin>>account_no;

   if (account_no != Account_no)
   {
      cout<<"Please enter correct account no"<<endl;
   }
   else if (balance_Ammount<=0)
   {
      cout<<"You have insufficient balance please deposit some amount"<<endl;
   }
   else
   {
      cout<<"Your current balance is "<<balance_Ammount<<endl;
      cout<<"Please enter the amount to withdraw "<<endl;
      cin>>m;

      if (m > balance_Ammount)
      {
         cout<<"You do not enough balance ammout, you can not withdraw"<<endl;
         goto a;
      }
      
      balance_Ammount -= m;
      
      a:
      cout<<"Your new balance is "<<balance_Ammount<<endl;
   }
}

void Bank_account :: display()
{
   cout<<"Account Holder name            : "<<Name<<endl<<endl;
   cout<<"Account no                     : "<<Account_no<<endl<<endl;
   cout<<"TYPE OF ACCOUNT                : "<<TypeOfAccount<<endl<<endl;
   cout<<"Balance                        : "<<balance_Ammount<<endl<<endl;

}

int main() 
{
   int c;
   Bank_account a;
   
   cout<<"\n\n******** Welcome to GPM bank *********"<<endl;

   a.To_initialize();
 while (1)
 {   
      cout<<"\n\n******** Welcome to GPM bank *********"<<endl;
      cout<<"1. To deposit amount "<<endl;
      cout<<"2. To withdraw amount "<<endl;
      cout<<"3. To display account details "<<endl;
      cout<<"4. To log-out"<<endl;

      cout<<"please select your choise"<<endl;
      cin>>c;

      switch (c)
      {
      case 1:
         a.Deposit();
         break;
      case 2:
         a.withdraw();
         break;
      case 3:
         a.display();
         break;
      case 4:
         cout<<"You have been log-outed successfully"<<endl;
         break;
      default: cout<<"Please select correct choise"<<endl;
         break;
      }

      if (c==4)
      {
         break;
      }
   }
   
   return 0;
}