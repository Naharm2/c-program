#include<stdio.h>
int main() {
    int a ,b ;
int sum,sub,mul,div,mode;
printf("Enter the value of a : ");
scanf("%d",&a);
printf("Enter the value of b : ");
scanf("%d",&b);

sum = a+b;
sub = a-b;
mul = a*b;
div = a/b;
mode = a%b;

 printf("addition of (%d + %d) : %d \n", a, b, sum);
printf("subtraction of (%d - %d) : %d \n", a, b, sub);
printf("multiple of (%d * %d) : %d \n", a, b, mul);
printf("division of (%d / %d) : %d \n", a, b, div);

return 0;
}