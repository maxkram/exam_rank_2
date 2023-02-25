#include <stdio.h>
int main() {
    int a, b, product;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);  
 
    // Calculating product
    product = a * b;

    // %.2lf displays number up to 2 decimal point
    printf("Product = %d\n", product);
    
    return 0;
}