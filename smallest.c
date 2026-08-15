#include <stdio.h>

int main() 
{
    int a, b;
    
    printf("Enter first number: ");
    scanf("%d", &a);
    
    printf("Enter second number: ");
    scanf("%d", &b);
    
    if(a < b) {
        printf("%d is smallest\n", a);
    } else if(b < a) {
        printf("%d is smallest\n", b);
    } else {
        printf("Both are equal\n");
    }
    
    return 0;
}
