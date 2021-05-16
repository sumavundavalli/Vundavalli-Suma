#include<stdio.h>
float far,cel;

int main()
{
    printf("Enter the temperature in farenheit :\n");
    scanf("%f",&far);
    cel = (far-32)*(5/9);
    printf("The temperature in celcius is %f", cel);

    return 0;
}
