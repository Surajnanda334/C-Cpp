#include<iostream>
using namespace std;
int main()
{
    int n,s=0;
    cout<<"Enter a number ";
    cin>>n;
    for(int i=n;i>0;i=i/10)
    {
        s+=i%10;
    }
    cout<<"Sum of digits in "<<n<<" is "<<s<<endl;
    return 0;
}
// output 
// Enter a number 6785
// Sum of digits in 6785 is 26