#include <stdio.h> 
int main() { 
    int num1, num2, gcd, lcm, temp1, temp2; 
    printf("Enter two numbers: "); 
    scanf("%d %d", &num1, &num2); 
    temp1 = num1; 
    temp2 = num2; 
    while (num2 != 0) { 
        int remainder = num1 % num2; 
        num1 = num2; 
        num2 = remainder; 
    } 
    gcd = num1;  
    lcm = (temp1 * temp2) / gcd;   
    printf("GCD = %d\n", gcd); 
    printf("LCM = %d\n", lcm); 
    return 0; 
}