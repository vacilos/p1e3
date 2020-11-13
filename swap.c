#include <stdio.h>

int main(void) {
	int a = 34;
	int b = 54;
	printf("A: %d, B: %d\n\n", a, b);
	//b = a;
	//a = b;
	int temp = a;
	a = b;
	b = temp;
	
	printf("A: %d, B: %d", a, b);
	return 0;
}
