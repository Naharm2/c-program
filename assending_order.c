#include<stdio.h>
int main()
{
    int a , b , c , min , mid , max;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a , &b , &c);
    if(a > b && a > c)
    {
        max = a;
    }
    else if(b > a && b > c)
    {
        max = b;
    }
    else if(c > a && c > b)
    {
        max = c;
    }
    if(a < b && a < c)
    {
        min = a;
    }
    else if(b < a && b < c)
    {
        min = b;
    }
    else if(c < a && c < b)
    {
        min = c;
    }
    mid = a + b + c - min - max;
    printf("Numbers in ascending order: %d, %d, %d", min, mid, max);
    return 0;
}