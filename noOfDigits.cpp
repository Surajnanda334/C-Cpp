#include<iostream>
using namespace std;
int numberOfDigits(int x)
{
    int c;
    while(x!=0)
    {
        x/=10;
        c++;
    }
    return c;
}
int main()
{
    int x;
    cout<<"Enter a number";
    cin>>x;
    cout<<"The number you entered has "<<numberOfDigits(x)<<" digits\n";   
    return 0;
}
// output
// Enter a number2345
// The number you entered has 4 digits