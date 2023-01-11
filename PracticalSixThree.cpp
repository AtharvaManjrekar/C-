#include <iostream>

using namespace std;

class vehicle
{
    public: 
        int mileage;
        int price;
        string model_type;
    
};

class car : public vehicle
{
    public:
        
        float ownership_cost;
        int warranty;
        int seating_capacity;
        string fuel_type;

};

class bike : public vehicle
{
    public:
        int number_of_cylinder;
        int gears;
        string cooling_type;
        string wheel_type;
        int fuel_tank_size;
};

class Audi : public car
{
    public:
        void add_details()
        {
            
            int a;

            cout<<"Enter model type of Audi car  : ";
            cin>>model_type;
            cout<<"Enter mileage of "<<model_type<<" model car : ";
            cin>>mileage;
            cout<<"Enter ownership cost of "<<model_type<<" model car : ";
            cin>>ownership_cost;
            cout<<"Enter warranty of "<<model_type<<" model car : ";
            cin>>warranty;
            cout<<"Enter seating capacity of "<<model_type<<" model car : ";
            cin>>seating_capacity;
            cout<<"select fuel type of "<<model_type<<" model car : ";
            cout<<"1. Diesel \n2. Petrol\n\n";
            cin>>a;
            
            switch (a)
            {
            case 1:
                fuel_type = "Diesel";
                break;
            case 2:
                fuel_type = "Petrol";
                break;
            
            default:
                cout<<"Please select correct choise"<<endl;
                break;
            }  

        }


        void print_details()
        {
            cout<<"Model of audi car : "<<model_type<<endl;
            cout<<"mileage of "<<model_type<<" car  : "<<mileage<<endl;
            cout<<"ownershipcost of "<<model_type<<" car  : "<<ownership_cost<<endl;
            cout<<"warranty of "<<model_type<<" car  : "<<warranty<<endl;
            cout<<"seating capacity of "<<model_type<<" car  : "<<seating_capacity<<endl;
            cout<<"fuel type of "<<model_type<<" car  : "<<fuel_type<<endl;
        }
};

class Ford : public car
{
    public:
        void add_details()
        {
            
            int a;

            cout<<"Enter model type of Ford car  : ";
            cin>>model_type;
            cout<<"Enter mileage of "<<model_type<<" model car : ";
            cin>>mileage;
            cout<<"Enter ownership cost of "<<model_type<<" model car : ";
            cin>>ownership_cost;
            cout<<"Enter warranty of "<<model_type<<" model car : ";
            cin>>warranty;
            cout<<"Enter seating capacity of "<<model_type<<" model car : ";
            cin>>seating_capacity;
            cout<<"select fuel type of "<<model_type<<" model car : ";
            cout<<"1. Diesel \n2. Petrol\n\n";
            cin>>a;
            
            switch (a)
            {
            case 1:
                fuel_type = "Diesel";
                break;
            case 2:
                fuel_type = "Petrol";
                break;
            
            default:
                cout<<"Please select correct choise"<<endl;
                break;
            }
        }


        void print_details()
        {
            cout<<"Model of audi car : "<<model_type<<endl;
            cout<<"mileage of "<<model_type<<" car  : "<<mileage<<endl;
            cout<<"ownershipcost of "<<model_type<<" car  : "<<ownership_cost<<endl;
            cout<<"warranty of "<<model_type<<" car  : "<<warranty<<endl;
            cout<<"seating capacity of "<<model_type<<" car  : "<<seating_capacity<<endl;
            cout<<"fuel type of "<<model_type<<" car  : "<<fuel_type<<endl;
        }
        
};

class Bajaj : public bike 
{
    public:
        void add_details()
        {
            
            int a,b;

            cout<<"Enter model type of BAJAJ bike  : ";
            cin>>model_type;
            cout<<"Enter mileage of "<<model_type<<" model bike : ";
            cin>>mileage;
            cout<<"Enter number_of_cylinder of "<<model_type<<" model bike : ";
            cin>>number_of_cylinder;
            cout<<"Enter number of gears of "<<model_type<<" model bike : ";
            cin>>gears;
            cout<<"\n1. air \n2. liquid\n3. oil\n\n";
            cout<<"select cooling type of "<<model_type<<" model bike : ";
            cin>>a;
            
            switch (a)
            {
            case 1:
                cooling_type = "air";
                break;
            case 2:
                cooling_type = "liquid";
                break;
            case 3:
                cooling_type = "oil";
                break;
            default:
                cout<<"Please select correct choise"<<endl;
                break;
            }  

            cout<<"\n1. alloy \n2. Petrol\n\n";
            cout<<"select wheel type of "<<model_type<<" model bike : ";
            cin>>b;
            
            switch (b)
            {
            case 1:
                wheel_type = "alloy";
                break;
            case 2:
                wheel_type = "spokes";
                break;
            
            default:
                cout<<"Please select correct choise"<<endl;
                break;
            }

        }

        void print_details()
        {
            cout<<"Model of BAJAJ Bike : "<<model_type<<endl;
            cout<<"mileage of "<<model_type<<" Bike  : "<<mileage<<endl;
            cout<<"number of cylinder of "<<model_type<<" Bike  : "<<number_of_cylinder<<endl;
            cout<<"number of gears of "<<model_type<<" Bike  : "<<gears<<endl;
            cout<<"cooling type of "<<model_type<<" Bike  : "<<cooling_type<<endl;
            cout<<"wheel type of "<<model_type<<" Bike  : "<<wheel_type<<endl;
        }
};

class TVS : public bike
{
     public:
        void add_details()
        {
            
            int a,b;

            cout<<"Enter model type of TVS bike  : ";
            cin>>model_type;
            cout<<"Enter mileage of "<<model_type<<" model bike : ";
            cin>>mileage;
            cout<<"Enter number_of_cylinder of "<<model_type<<" model bike : ";
            cin>>number_of_cylinder;
            cout<<"Enter number of gears of "<<model_type<<" model bike : ";
            cin>>gears;
            cout<<"\n1. air \n2. liquid\n3. oil\n\n";
            cout<<"select cooling type of "<<model_type<<" model bike : ";
            cin>>a;
            
            switch (a)
            {
            case 1:
                cooling_type = "air";
                break;
            case 2:
                cooling_type = "liquid";
                break;
            case 3:
                cooling_type = "oil";
                break;
            default:
                cout<<"Please select correct choise"<<endl;
                break;
            }  

            cout<<"\n1. alloy \n2. Petrol\n\n";
            cout<<"select wheel type of "<<model_type<<" model bike : ";
            cin>>b;
            
            switch (b)
            {
            case 1:
                wheel_type = "alloy";
                break;
            case 2:
                wheel_type = "spokes";
                break;
            
            default:
                cout<<"Please select correct choise"<<endl;
                break;
            }

        }

        void print_details()
        {
            cout<<"Model of BAJAJ Bike : "<<model_type<<endl;
            cout<<"mileage of "<<model_type<<" Bike  : "<<mileage<<endl;
            cout<<"number of cylinder of "<<model_type<<" Bike  : "<<number_of_cylinder<<endl;
            cout<<"number of gears of "<<model_type<<" Bike  : "<<gears<<endl;
            cout<<"cooling type of "<<model_type<<" Bike  : "<<cooling_type<<endl;
            cout<<"wheel type of "<<model_type<<" Bike  : "<<wheel_type<<endl;
        }
};



int main() 
{

    int ch;
    int x,y;
    int p = 0;
    Audi a;
    Ford b;
    Bajaj c;
    TVS d;


    while (ch != 3)
    {
        cout<<"1. Add details of vehicals \n 2. Print details of vehicle \n 3. Log-out\n\n";

        cout<<"Please select your choise :  ";
        cin>>ch;

        switch (ch)
        {
        case 1:
            while (x != 5)
            {
            
                cout<<"Select your vehicle brand "<<endl;
                cout<<" 1.audi \n 2. Ford \n 3.BAJAJ \n 4. TVS\n 5. Back to main menu\n\n";

                cout<<"PLease select your choise : ";
                cin>>x;

                switch (x)
                {
                case 1:
                    a.add_details();
                    p++;
                    break;
                case 2:
                    b.add_details();
                    p++;
                    break;
                case 3:
                    c.add_details();
                    p++;
                    break;
                case 4:
                    d.add_details();
                    p++;
                    break;
                case 5:
                    cout<<"Back to the main menu"<<endl;
                    break;

                default:
                    cout<<"Please select correct choise"<<endl;
                    break;
                }
            }

            break;
            
        case 2:
            while (y != 5)
            {
            
                cout<<"Select your vehicle brand "<<endl;
                cout<<" 1.audi \n 2. Ford \n 3.BAJAJ \n 4. TVS\n 5. Back to main menu\n\n";

                cout<<"PLease select your choise : ";
                cin>>y;

                switch (y)
                {
                case 1:
                    if(p == 0)
                    {
                        cout<<"Error ! Please add details of audi brand vehical first "<<endl;
                    }
                    else
                    {
                        a.print_details();
                    }
                    
                    break;
                case 2:

                    if(p == 0)
                    {
                        cout<<"Error ! Please add details of Ford brand vehical first "<<endl;
                    }
                    else
                    {
                        b.print_details();
                    }
                    break;
                case 3:
                    if(p == 0)
                    {
                        cout<<"Error ! Please add details of BAJAJ brand vehical first "<<endl;
                    }
                    else
                    {
                        c.print_details();
                    }
                    break;
                case 4:
                    if(p == 0)
                    {
                        cout<<"Error ! Please add details of audi brand vehical first "<<endl;
                    }
                    else
                    {
                        d.print_details();
                    }
                    break;
                case 5:
                    cout<<"Back to the main menu"<<endl;
                    break;

                default:
                    cout<<"Please select correct choise"<<endl;
                    break;
                }
            }

            break;
        case 3:
            cout<<"YOU HAVE BEEN LOG-OUTED SUCCESSFULLY"<<endl;
        default:
            break;
        }

    }
    


    


    return 0;
}