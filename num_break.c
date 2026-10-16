#include <stdio.h>
int main() 
{
    int i=1;
    while(i<=5)
        {
            if(i==2)
            {
                i++;
                continue;
            }
            printf("%d \t",i);
            i++;
            
        }
    return 0;
}
