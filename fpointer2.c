#include <stdio.h>

int add(int a, int b);
int sub(int a, int b);
int mul(int a, int b);
int div(int a, int b);

int main() {
	int a, b;
	scanf("%d %d", &a, &b);
	

	int(*fp)(int, int);
	fp = mul;
	printf("%d\n", fp(a, b));
	printf("%d\n", add(a, b));
	
	int(*fptr[4])(int, int);
	fptr[0] = add;
	fptr[1] = sub;
	fptr[2] = mul;
	fptr[3] = div;

	for (int i = 0; i < 4; i++)
	{
		printf("%d\n", fptr[i](a, b));
	}
	return 0;
}

int add(int a, int b) {
	return a + b;
}
int sub(int a, int b) {
	return a - b;
}
int mul(int a, int b) {
	return a * b;
}
int div(int a, int b) {
	return a / b;
}
