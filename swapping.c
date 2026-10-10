#include<stdio.h>
int main()
{
    int x, y, temp;
    printf("Enter two numbers: ");  
    scanf("%d %d",&x,&y);

    printf("Before swapping: x = %d, y = %d\n", x, y);
    printf("x = %d, y = %d\n", x, y);
    temp = x;
    x = y;
    y = temp;

    printf("After swapping: x = %d, y = %d\n", x, y);
    printf("x = %d, y = %d\n", x, y);
    return 0;
}