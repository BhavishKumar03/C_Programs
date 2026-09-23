#include <stdio.h>

int main() {
    float celsius,fahrenheit;
    printf("Enter a temperature in degree celsius:");
    scanf("%f",&celsius);
    fahrenheit=(celsius*9/5)+32;
    printf("Temperature in fahrenheit=%.2f",fahrenheit);
    return 0;
}