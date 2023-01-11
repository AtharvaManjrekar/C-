/* 3.2 Write a function which will find sum of all the prime 
numbers up to n. where n is input by user.*/

#include <iostream>
using namespace std;

void findprime(int end){
   int isPrime,i,j,sum=0;
    for(i=2; i<=end; i++)
    {

        isPrime = 1;
        for(j=2; j<=i/2 ;j++)
        {
            if(i%j==0)
            {
                isPrime = 0;
                break;
            }
        }

        
        if(isPrime==1)
        {
            sum= sum + i;
        }
    }
    // cout<<sum;
    cout << "Sum of all prime between 1 to "<<end <<" is "<<sum<<endl;


}
int main(){
    int end ;
    int a ;
    cout << "Find sum of all prime between 1 to : " ;
    cin >> end ;
    findprime(end);
    
    return 0;
}