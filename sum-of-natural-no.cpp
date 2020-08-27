#include<iostream>
using namespace std;
int main()
{
    int s=0,n;
    cout<<"Enter a number ";
    cin>>n;
    for (int i = 1; i <= n; i++)
    {
        s+=i;
    }
    cout<<"Sum of "<<n<<" natural numbers is "<<s<<endl;
    
    return 0;
}
// output
// Enter a number 5
// Sum of 5 natural numbers is 15

// Enter a number 77
// Sum of 77 natural numbers is 3003