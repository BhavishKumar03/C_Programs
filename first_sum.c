#include<stdio.h>

void main()
{
    /* int i,sum=0;
    for(i=1;i<=10;i++)
    {
        sum+=i;
    }
    printf("Sum=%d",sum); */

    int i=1,sum=0;
    do
    {
        sum+=i;
        i++;
    }while(i<=10);
    printf("Sum=%d",sum);
}