//Define a struct Circle with a member of type struct Point as center and a double member radius.

#include <iostream>

using namespace std;

struct circle
{
    
    struct point center;

    double radius;
    
};

struct point{
    double x;
    double y;
};

int main() 
{
    struct circle a;
    

    return 0;
}