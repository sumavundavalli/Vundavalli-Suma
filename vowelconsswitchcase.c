//Develop a C program to determine whether the entered character is a vowel or consonant using switch case statement
#include<stdio.h>
int main()
{
    char alphabet;
    printf("\n Enter any alphabet :");
    scanf("%c",&alphabet);
    switch(alphabet)
    {
        case 'A':
        case 'a':
        printf("\n The alphabet is vowel :");
        break;
        case 'E':
        case 'e':
        printf("\n The alphabet is vowel :");
        break;
        case 'I':
        case 'i':
        printf("\n The alphabet is vowel :");
        break;
        case 'O':
        case 'o':
        printf("\n The alphabet is vowel :");
        break;
        case 'U':
        case 'u':
        printf("\n The alphabet is vowel :");
        break;
        default:
            printf("\n The alphabet is a consonant. ");

    }
     return 0;
}
