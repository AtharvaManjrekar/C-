#include <iostream>

using namespace std;

class COLLEGE {
    public:
        int college_code ;
        
};

class STUDENT : public COLLEGE{
    public:
        string studid;
};

int main(){
    
    STUDENT a1;
    cout<<"Enter college code    : ";
    cin>>a1.college_code;
    
    cout<<"Enter Enrollment number of student : ";
    cin>>a1.studid;
    
    cout<<endl<<endl;
    
    cout<<"DATA OF STUDENT 1"<<endl;
    
    cout<<"college code          : "<<a1.college_code<<endl<<endl;
    cout<<"Studied Student name  : "<<a1.studid<<endl<<endl;
    
    
    
    return 0;
    
}