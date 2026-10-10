#include<stdio.h>
int main()
{
    float fehrenheit, celcius;
    printf("Enter temperature in fehrenheit: ");
    scanf("%f", &fehrenheit);
    celcius = (fehrenheit - 32) * 5/9;
    printf("Temperature in celcius: %f", celcius);
    return 0;
}