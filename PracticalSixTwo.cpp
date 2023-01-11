#include <iostream>
#include <math.h>

using namespace std;


class simplecalculator {
    
    public :
        int x,y;
        int res;


        void addition(int x,int y)
        {
            res = x + y;
            cout<<"Addition of "<<x<<" and "<<y<<" is "<<res;
        }
        void subtraction(int x,int y)
        {
            res = x - y;
            cout<<"Subtraction of "<<x<<" and "<<y<<" is "<<res;
        }
        void multiplication(int x,int y)
        {
            res = x * y;
            cout<<"Multiplication of "<<x<<" and "<<y<<" is "<<res;
        }
        void division(int x,int y)
        {
            res = x / y;
            cout<<"Division of "<<x<<" and "<<y<<" is "<<res;
        }
};

class scientific_calculator{
    public:

        
        int a, b;
        int ans1,ans2,ans3;

        void squareroot(int a)
        {
            ans1 = sqrt(a);
            cout<<"Square root of "<<a<<" is "<<ans1<<endl;
        }

        void exponent(int a, int b)
        {
            ans1 = pow(a,b);
            cout<<"Exponent of "<<a<<"^"<<b<<" is "<<ans1<<endl;
        }

        void sin_cos_tan(int a)
        {
            ans1 = sin(a);
            ans2 = cos(a);
            ans3 = tan(a);


            cout<<"Sin of"<<a<<" is "<<ans1<<endl;
            cout<<"Cos of"<<a<<" is "<<ans2<<endl;
            cout<<"Tan of"<<a<<" is "<<ans3<<endl;

        }

        void sin_cos_tan_inverse(int a)
        {
            ans1 = asin(a);
            ans2 = acos(a);
            ans3 = atan(a);


            cout<<"Sin inverse of"<<a<<" is "<<ans1<<endl;
            cout<<"Cos inverse of"<<a<<" is "<<ans2<<endl;
            cout<<"Tan inverse of"<<a<<" is "<<ans3<<endl;

        }

};

class HybridCalculator : public simplecalculator , public scientific_calculator
{

};

int main()
{
    int ch , x , y  ;
    int a,b;
    HybridCalculator obj1;

    while (ch != 9)
    {

        
        cout<<"\n\n";
        cout<<"1. Simple calclator\n";
        cout<<"2. Scientific calculator\n";
        cout<<"3. log-out\n\n\n";
        
        cout<<"Select your choise : ";
        cin>>ch;


        switch (ch)
        {
        case 1:

            while (x != 5)
            {
                
            
            
                cout<<"SIMPLE CALCULATOR"<<endl;

                cout<<"1. To add\n\n";
                cout<<"2. To subtract\n\n";
                cout<<"3. To mulitiply\n\n";
                cout<<"4. To division\n\n";
                cout<<"5. To back to the main menu\n\n";


            
                switch(x)
                {
                case 1: 
                    cout<<"Accessing simple calculator .........."<<endl<<endl;
                    cout<<"Enter two numbers : ";
                    cin>>a>>b;
                    obj1.addition(a,b);
                    // a=0;
                    // b=0;
                    a=b=0;
                    break;
                case 2: 
                    cout<<"Accessing simple calculator .........."<<endl<<endl;
                    cout<<"Enter two numbers : ";
                    cin>>a>>b;
                    obj1.subtraction(a,b);
                    // a=0;
                    // b=0;
                    a=b=0;
                    break;
                case 3: 
                    cout<<"Accessing simple calculator .........."<<endl<<endl;
                    cout<<"Enter two numbers : ";
                    cin>>a>>b;
                    obj1.multiplication(a,b);
                    // a=0;
                    // b=0;
                    a=b=0;
                    break;
                case 4:
                    cout<<"Accessing simple calculator .........."<<endl<<endl;
                    cout<<"Enter two numbers : ";
                    cin>>a>>b;
                    obj1.division(a,b);  
                    // a=0;
                    // b=0;
                    a=b=0;
                    break;

                    break;
                case 5:
                    cout<<"BAck to the main menu"<<endl;
                    exit(1);
                default:
                    cout<<"Please select your correct choise\n";
                }
                break;
            
            }
        case 2:
            while (y != 5)
            {
                
                cout<<"SCIENTIFIC CALCULATOR\n";

                cout<<"1. to get square root\n";
                cout<<"2. to get Exponent\n";
                cout<<"3. to get sin , cos and tan \n";
                cout<<"4. to get sin inverse , cos inverse and tan inverse \n";
                cout<<"5. to back to main menu\n";
                
            
             
                switch (y)
                {
                case 1:
                    cout<<"Accessing Scientific calculator .........."<<endl<<endl;
                    cout<<"Enter a number to get its square root : ";
                    cin>>a;
                    obj1.squareroot(a);
                    // a=0;
                    // b=0;
                    a=b=0;
                    break;
                case 2:
                    cout<<"Accessing Scientific calculator .........."<<endl<<endl;
                    cout<<"Enter a number to get its Exponent : ";
                    cin>>a;
                    cout<<"Enter a value of power : ";
                    cin>>b;
                    obj1.exponent(a,b);
                    // a=0;
                    // b=0;
                    a=b=0;
                    break;
                case 3:
                    cout<<"Accessing Scientific calculator .........."<<endl<<endl;
                    cout<<"Enter a number to get its sin , cos and tan value : ";
                    cin>>a;
                    obj1.sin_cos_tan(a);
                    // a=0;
                    // b=0;
                    a=b=0;
                    break;
                case 4:
                    cout<<"Accessing Scientific calculator .........."<<endl<<endl;
                    cout<<"Enter a number to get its sin inverse, cos inverse and tan inverse value : ";
                    cin>>a;
                    obj1.sin_cos_tan_inverse(a);
                    // a=0;
                    // b=0;
                    a=b=0;

                case 5:
                        cout<<"Back to the main menu"<<endl;
                default:
                        cout<<"Please select your correct choise\n";
                }

            }
            break;
        case 3:
            cout<<"You have been Log-outed"<<endl;
        
        default:
            cout<<"please select your correct choise"<<endl;
            break;
        }
        
        

    }
    return 0;
}