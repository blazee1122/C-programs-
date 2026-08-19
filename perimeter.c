#include <stdio.h>

int main() 
{
    int l, b, perimeter;
    
    printf("Enter length of rectangle: ");
    scanf("%d", &l);
    
    printf("Enter breadth of rectangle: ");
    scanf("%d", &b);
    
    perimeter = 2 * (l + b);
    
    printf("Perimeter of rectangle = %d\n", perimeter);
    
    return 0;
}
