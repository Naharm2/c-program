#include<stdio.h>
int main()
{
    int maths, bee , pps, egd, avg, tmarks, percent;
    printf("Enter marks of Maths: ");
    scanf("%d", &maths);
    printf("Enter marks of BEE: ");
    scanf("%d", &bee);
    printf("Enter marks of PPS: ");
    scanf("%d", &pps);
    printf("Enter marks of EGD: ");
    scanf("%d", &egd);
    tmarks = maths + bee + pps + egd;
    avg = tmarks / 4;
    percent = (tmarks * 100) / 400;
    printf("Total marks: %d\n", tmarks);
    printf("Average marks: %d\n", avg);
    printf("Percentage: %d%%\n", percent);
    return 0;
}