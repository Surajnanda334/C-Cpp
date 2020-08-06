#include<iostream>
using namespace std;
float area(float r)
{
    return 2*r*3.14;
}
int main()
{
    float r;
    cout<<"enter the radius of the circle ";
    cin>>r;
    cout<<"Area of circle is "<<area(r)<<"\n";
    return 0;
}
// output
// enter the radius of the circle 4
// Area of circle is 25.12 