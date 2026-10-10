#include<stdio.h>
int main()
{
    int x,y;
    int sum,sub,mul,div;
    printf("Enter two numbers: ");
    scanf("%d %d",&x,&y);
    sum=x+y;    
    sub=x-y;
    mul=x*y;
    div=x/y;

    printf("Sum: %d\n",sum);
    printf("Sub: %d\n",sub);
    printf("Mul: %d\n",mul);
    printf("Div: %d\n",div);
    return 0;
    
}