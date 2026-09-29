#include <stdio.h> 
#include <math.h>   
 
int main() { 
    float a, b, c; 
    float disc, root1, root2, realPart, imagPart; 
    printf("Enter coefficients a, b, and c: "); 
    scanf("%f%f%f",&a,&b,&c); 
 
    disc = b * b - 4 * a * c; 
 
    if (disc > 0) { 
        printf("Roots are real and different.\n"); 
        root1 = (-b + sqrt(disc)) / (2 * a); 
        root2 = (-b - sqrt(disc)) / (2 * a); 
        printf("Root1 = %.2f and Root2 = %.2f\n", root1, root2); 
    } 
    else if (disc == 0) { 
        printf("Roots are real and equal.\n"); 
        root1 = -b / (2 * a); 
        printf("Root1 = Root2 = %.2f\n", root1); 
    } 
    else { 
        printf("Roots are complex and different.\n"); 
        realPart = -b / (2 * a); 
        imagPart = sqrt(-disc) / (2 * a); 
        printf("Root1 = %.2f + %.2fi and Root2 = %.2f - %.2fi\n", realPart, imagPart, realPart, imagPart); 
    } 
 
    return 0; 
}