#include <stdio.h>
float average(int x,int y,int z);
int main()
{
int a,b,c;
float avg;
printf("Enter 3 numbers:\n");
scanf("%d%d%d",&a,&b,&c);
printf("a=%d,b=%d,c=%d",a,b,c);
avg=average(a,b,c);
printf("Average is %f",average(a,b,c));
return 0;
}
float average(int x,int y,int z)
{
    float avg;
    avg=(x+y+z)/3;
    printf("avg = %f",avg);
    return avg;
}
