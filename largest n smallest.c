//Develop a C program to interchange the largest and smallest number in the given array.

#include<stdio.h>
int main()
{
int a[50],max,min,pos,maxpos,minpos,i,temp,n;
printf("Enter the number of elements in the array:\n");
scanf("%d",&n);
printf("Enter the elements of the array");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
max=a[0];
min=a[0];
maxpos=0;
minpos=0;
for(i=1;i<n;i++)
{
if(a[i]>max)
{
max=a[i];
maxpos=i;
}
if(a[i]<min)
{
min=a[i];
minpos=i;
}
}
temp=a[maxpos];
a[maxpos]=a[minpos];
a[minpos]=temp;
printf("The array after interchange of the largest and smallest elements:\n");
for(i=0;i<n;i++)
{
printf("%d",a[i]);
}
return 0;
}
