#include<stdio.h>
int main()
{
    int p,r,t,ci;
    printf("Enter principal amount: ");
    scanf("%d", &p);
    printf("Enter rate of interest: ");
    scanf("%d", &r);
    printf("Enter time in years: ");
    scanf("%d", &t);
    ci = p * (1 + r / 100) * t;
    printf("-----Results-----\n");
    printf("Principal Amount = %d\n", p);
    printf("Rate of Interest = %d\n", r);
    printf("Time in years = %d\n", t);
    printf("Compound Interest = %d\n", ci);
    return 0;
}