//Develop a C program to check the given string is palindrome or not.
#include <stdio.h>
#include <string.h>
int main()
{
char str[100];
int i, len, flag;
flag = 0;
printf("\n Enter the String :  ");
gets(str);
len = strlen(str);
for(i = 0; i < len; i++)
{
if(str[i] != str[len - i - 1])
{
flag = 1;
break;
}
}
if(flag == 0)
printf("\n %s is a Palindrome", str);
else
printf("\n %s is Not a Palindrome", str);
return 0;
}
