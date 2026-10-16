#include<stdio.h>
#define PI 3.14
int main()
{
    float radius,area,circum;
    printf("Enter a radius:");
    scanf("%f",&radius);
    area=PI*radius*radius;
    circum=2*PI*radius;
    printf("Area=%.2f\n",area);
    printf("Circumference=%.2f",circum);
    return 0;
}