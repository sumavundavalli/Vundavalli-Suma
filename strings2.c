//Program to copy one string to another string and find its length without using built in function
#include <stdio.h>
void main()
{
 char p[100],a[100];
 int i, length = 0;
 printf("\nEnter the string :");
 gets(p);
 i = 0;
 while (p[i] != '\0')
 {
 a[i] = p[i];
 i++;
 }
 for (i = 0; a[i] != '\0'; i++)
 {
 length++;
 }
 a[i] = '\0';
 printf("\n Copied String is %s ", a);
 printf("\n The length of a string is the number of characters in it \n");
 printf("So, the length of %s = %d\n", a, length); }
