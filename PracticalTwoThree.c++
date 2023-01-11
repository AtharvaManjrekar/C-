/* Write a function which will take two arguments of type struct Circle and will return 1 if the two 
circles are intersecting and return 0 otherwise. */

#include <iostream>
using namespace std;
struct point{
    double x;
    double y;
};
struct circle
{
    struct point center;
    double radius;   
};
double circle(double x1, double y1, double x2,
           double y2, double r1, double r2)
{
    double distSq = (x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2);
    double radSumSq = (r1 + r2) * (r1 + r2);
    if (distSq == radSumSq || distSq > radSumSq)
        return 0;
    else
        return 1;
}

int main() 
{
    double t;
    struct circle c1,c2;
    double x1 = c1.center.x;
    double y1 = c1.center.y;
    double x2 = c2.center.x;
    double y2 = c2.center.y;
    double r1 = c1.radius;
    double r2 = c2.radius;

    cout<<"Enter x and y of the centre of circle 1 :\n";
    cin>>x1;
    cin>>y1;
    cout<<"Enter x and y of the centre of circle 2 :\n";
    cin>>x2;
    cin>>y2;
    cout<<"Enter radius of the circle 1 :\n";
    cin>>r1;
    cout<<"Enter radius of the circle 2 :\n";
    cin>>r2;

   t = circle(x1, y1, x2, y2, r1, r2);
    if (t == 1)
        cout << "Circle intersect with each other"<<endl;
    else 
       cout << "Circle do not intersect with each other"<<endl;

    
    return 0;
}