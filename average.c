#include <stdio.h>

int main() 

{
    int a, b, avg;
    
    printf("Enter first number: ");
    scanf("%d", &a);
    
    printf("Enter second number: ");
    scanf("%d", &b);
    
    avg = (a + b) / 2;
    
    printf("The average of %d and %d = %d\n", a,b,avg);
    
    return 0;

}
