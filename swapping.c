//Illustrate pointers in swapping two numbers.
#include<stdio.h>
void swap(int*x,int*y)
{
int t;
t=*x;
*x=*y;
*y=t;
}
int main()
{
int n1,n2;
printf("Enter the first number = ");
scanf("%d",&n1);
printf("Enter the second number = ");
scanf("%d",&n2);
printf("\nBefore swapping the numbers are %d and %d",n1,n2);
swap(&n1,&n2);
printf("\nAfter swapping the numbers are %d and %d",n1,n2);
return 0;
}
