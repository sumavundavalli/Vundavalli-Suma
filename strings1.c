//Program to concatenate two strings and find the length of resultant string without using built in function
#include<conio.h>
void main()
{
 char p[100],m[100],y[100];
 int i=0,j=0;
 printf("\n Enter the first word \n");
 gets(p);
 printf("\n Enter the second word \n");
 gets(m);
 while(p[i] !='\0')
 {
 y[j]=p[i];
 i++;
 j++;
 }
 i=0; while(m[i]!='\0')
 {
 y[j]=m[i];
 i++;
 j++;
 }
 y[j]= '\0';
 printf("combination of the two words is \n");
 puts(y);
 getch();
}
