#include<stdio.h>
int main()
{
    int a,b,c;
    printf("\n Enter three numbers :");
    scanf("%d%d%d",&a,&b,&c);
    printf("a=%d, b=%d, c=%d",a,b,c);
    if (a<b & a<c)
    {
        printf("\n a is smaller");
    }
    else if (b<a & b<c)
    {
        printf("\n b is smaller");
    }
    else
    {
        printf("\n c is smaller");
    }
    return 0;
}
