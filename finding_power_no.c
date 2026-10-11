#include<stdio.h>
#include<math.h>
int main()
{
    double base, exponent, result = 1.0;
    printf("Enter the base: ");
    scanf("%lf", &base);
    printf("Enter the exponent: ");
    scanf("%lf", &exponent);
    result = pow(base, exponent);
    printf("Result: %.2lf", result);
    return 0;
}