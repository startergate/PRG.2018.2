/*#include <stdio.h>

void swap1(int, int);
void swap2(int *, int *);

int main() {
	// call by value
	int a = 10, b = 5;
	printf("main (): a = %d b = %d\n", a, b);
	swap1(a, b);
	printf("main (): a = %d b = %d\n", a, b);

	// call by reference
	swap2(&a, &b);
	printf("main (): a = %d b = %d\n", a, b);

	return 0;
}

void swap1(int a, int b) {

	int temp;
	temp = a, a = b, b = temp;
	printf("swap1 (): a = %d b = %d\n", a, b);
	return;
}

void swap2(int *a, int *b) {

	int temp = *a;
	*a = *b;
	*b = temp;
}*/