#include<iostream>
using namespace std;
void check(int c)
{
    if(c-abs(c)==0)
    {
        cout<<c<<" is posetive\n";
    }
    else
    {
        cout<<c<<" is negative\n";
    }
    
}
int main()
{
    int c;
    cout<<"Enter a number \n";
    cin>>c;
    check(c);
    return 0;
}
// output
// Enter a number 
// 3
// 3 is posetive


// Enter a number 
// -8
// -8 is negative