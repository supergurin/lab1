#include <stdio.h>

int main()

{
    int x, y, x1, y1;
    
    printf("x= ");
    scanf("%d" ,&x);
    
    y = x * x;
    printf ("y=%d", y);
	
    printf("\nx1= ");
    scanf("%d" ,&x1);
    
    y1 = x1 * x1;
    printf ("y1=%d", y1);

    return 0;
}
