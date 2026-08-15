#include <stdio.h>

int main() 

{
    int a, b, p;
    
    printf("Enter first number: ");
    scanf("%d", &a);
    
    printf("Enter second number: ");
    scanf("%d", &b);
    
    p = a * b;
    
    printf("Product of %d and %d = %d\n", a,b,p);
    
    return 0;

}
