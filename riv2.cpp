#include <stdio.h>
#include <stdlib.h>

int main() {
	int a, b, x;
	printf("Kalkylator yravnenia vidy: a * x + b = 0\n");
	printf("Vvedite a:\na = ");
	scanf("%d", &a);
	printf("Vvedite b:\nb = ");
	scanf("%d", &b);
	x = - b / a;
	printf("x = %d", x);
	
	return 0;
}
