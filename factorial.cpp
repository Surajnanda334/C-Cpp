#include<iostream>
using namespace std;
int factorial(int x)
{
    if(x==1||x==0)
    {
        return 1;
    }
    else 
    return x*(factorial(x-1));
}
int main()
{
    int a;
    cout<<"Enter a number";
    cin>>a;
    cout<<"factorial of "<<a<<" is "<<factorial(a)<<"\n";
    return 0;
}
//output
// Enter a number4
// factorial of 4 is 24
