#include<stdio.h>
int sum(int x,int y)
{
    int s=x+y;
    return s;
}
int main()

{
   int s= sum(3,5);
    printf("sum of 3 and 5 is %d",s);
    
}