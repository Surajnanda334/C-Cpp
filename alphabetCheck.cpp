#include<iostream>
#include<ctype.h>
using namespace std;
int main()
{
    char c;
    cout<<"Enter a character ";
    cin>>c;
    if(isalpha(c))
    {
        cout<<"The entered character is an alphabet";
    }
    else
    {
        cout<<"\nThe entered character is not an alphabet";
    }
    
    return 0;
}
// output:
// Enter a character 7
// The entered character is not an alphabet

// Enter a character d
// The entered character is an alphabet
