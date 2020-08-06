#include<iostream>
using namespace std;
void fibonacci(int x)
{
    int f=0,s=1,t;
    cout<<"0,1";
    for(int i=0;i<x-2;i++)
    {
        cout<<","<<f+s;
        t=f+s;
        f=s;
        s=t;
    }
}
int main()
{
    int n;
    cout<<"Enter the number of elements of the fibonacci series ";
    cin>>n;
    fibonacci(n);
    cout<<"\n";
    return 0;
}
// output:
// Enter the number of elements of the fibonacci series 10
// 0,1,1,2,3,5,8,13,21,34