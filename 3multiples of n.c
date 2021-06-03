//  Develop a C program to print multiples of n from 1 to 100.
#include<stdio.h>
int main()
{
    int num,i,p;
    printf("\n Enter a number:");
    scanf("%d" , &num);
    i=1;
    while(i<=100)
    {
        p=num*i;
        printf("%d*%d=%d",num,i,p);
        i++;
    }
    return 0;
}

