// Develop a C program to enter a number and calculate the sum of its digits.
#include<stdio.h>
int main()
{
    int m,r,sum=0;
    printf("\n Enter any number:");
    scanf("%d",&m);
    while(m>0)
    {
        r=(m%10);
        sum= sum +r;
        m=m/10;
    }
    printf("The sum of the digits is %d",sum);
    return 0;
}
