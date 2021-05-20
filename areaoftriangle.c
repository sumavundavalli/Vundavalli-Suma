#include<stdio.h>
#include<math.h>
float area(int x, int y,int z);
int main()
{
   int a,b,c;
   printf("\n Enter the first side of the triangle :");
   scanf("%d",&a);
   printf("\n Enter the second side of the triangle :");
   scanf("%d",&b);
   printf("\n Enter the third side of the triangle :");
   scanf("%d",&c);
   printf("a=%d,b=%d, c=%d",a,b,c);
   printf("Area is %f",area(a,b,c));
   return 0;
}
float area(int x , int y, int z)
{
    float s,ar;
    s= (float)(x+y+z)/2;
    printf("s=%f", s);
    ar = (float)sqrt(s*(s-x)*(s-y)*(s-z));
    printf("ar = %f",ar);
    return ar;

}




