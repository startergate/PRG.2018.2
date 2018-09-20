#include <stdio.h>

/*int main() {
	int a[] = { 10,20,30,40,50 };
	int *ptr = a;

	printf("蔼: %d, 林家: %p\n", a[0], ptr);
	printf("蔼: %d, 林家: %p\n", *(ptr + 1), ptr + 1);
	printf("蔼: %d, 林家: %p\n", a[2], &a[2]);
	printf("蔼: %d, 林家: %p\n", a[3], &a[3]);
	
	for (int i = 0; i < 5; i++)
	{
		printf("蔼: %d, 林家: %p\n", *(ptr + i), ptr + i);
	}
	return 0;
}

// ptr[0]   ... ptr[i]
// a[0]     ... a[i]
// *(ptr+0) ... *(ptr+1)
// *(a+0)   ... *(a+1)

// &ptr[0]  ... &ptr[i]
// &a[0]    ... &a[i]
// ptr + 1  ... ptr + i
// a + 1    ... a + i
*/

/*void print(int *, int);

int main() {
	int a[5] = { 1, 2, 3, 4, 5 };
	int length = sizeof(a) / sizeof(a[0]);
	print(a, length);
}

void print(int *ptr, int length) {
	for (int i = 0; i < length; i++)
	{
		printf("%d", *(ptr + length - i - 1));
	}
}*/