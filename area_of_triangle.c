#include<stdio.h>
#include<math.h>
int main()
{
    float a, b, c, s, area;
    printf("enter the lengths of the three sides of the triangle: ");
    scanf("%f %f %f", &a, &b, &c);
    s = (a+b+c)/2;
    area = sqrt(s*(s-a)*(s-b)*(s-c));
    printf("semi-perimeter of the triangle = %f\n", s);
    printf("area of the triangle = %f\n", area);
    return 0;
}