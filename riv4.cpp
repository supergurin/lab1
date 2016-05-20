#include <stdio.h>

int main ()
{
    float number;
    
    printf("Number=");
    scanf("%f", &number);
    
    printf("\n%3.2f\n", number);
    printf("\nExponential style: %e", number);
    printf("\n%3.7f\n", number);
    
    return 0;
}
