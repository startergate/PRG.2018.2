#include <stdio.h>

void swap(void*, void*);

int main() {
	int a = 10, b = 20;
	printf("%d %d\n", a, b);

	swap(&a, &b);
	printf("%d %d\n", a, b);
	return 0;
}

void swap(void*a, void*b) {
	int temp;

	temp = *(int *)a;
	*(int *)a = *(int *)b;
	*(int *)b = temp;
}