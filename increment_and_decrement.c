#include<stdio.h>
int main()
{
    int a , b , c;
    printf("Enter the value of a: ");
    scanf("%d",&a);

    printf("Enter the value of b: ");
    scanf("%d",&b);

     printf("Enter the value of c: ");
     scanf("%d",&c);

     a++;
     b++;
     c++;

      printf("the value of a after increment is: %d\n",a);
      printf("the value of b after increment is: %d\n",b);
      printf("the value of c after increment is: %d\n",c);


      --a;
      --b;
      --c;


      printf("the value of a after decrease is: %d\n",a);
      printf("the value of b after decrease is: %d\n",b);
      printf("the value of c after decrease is: %d\n",c);

    return 0;
}