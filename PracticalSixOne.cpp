#include <iostream>

using namespace std;

class college{
    public:
    int college_code;
    
};

class student:public college{
    public:
    string studied;
};

int main(){
    
    student a1;
    // al.college code=32;
    cout<<"Enter college code :";
    cin>>a1.college_code;
    
    cout<<"Enter name of student ";
     cin>>a1.studied;
     
     cout<<endl<<endl;
     
     cout<<"Data of student 1"<<endl;
     
     cout<<"college code    :"<<a1.college_code<<endl<<endl;
     cout<<"student studied :"<<a1.studied<<endl<<endl;
    
     
     return 0;
    
}