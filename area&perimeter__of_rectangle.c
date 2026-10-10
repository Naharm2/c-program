#include<stdio.h>
int main()
{
    int length, width, area, perimeter;
    printf("Enter length of recatangle: ");
    scanf("%d",  &length);
    printf("Enter width of recatangle: ");
    scanf("%d",  &width);

    area = length * width;
    perimeter = 2 * (length + width);
    printf("area of rectangle = %d\n", area);
    printf("perimeter of rectangle = %d\n", perimeter);
    return 0;
}