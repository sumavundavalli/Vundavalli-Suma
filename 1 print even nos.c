//  Develop a C program to print even numbers from M to N.
#include<stdio.h>
int main()
{
    int m,n;
    printf("Enter the value of m and n:\n");
    scanf("%d%d",&m,&n);
    while(m<=n)
    {
        if(m%2==0)
        printf("m=%d",m);
        m=m+1;

    }
    return 0;

}

