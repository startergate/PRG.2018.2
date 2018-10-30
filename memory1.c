#include <stdio.h>
#include <stdlib.h>

int main() {
	int n = 10;
	int *ptr1 = &n;
	int *ptr2 = (int *) malloc(sizeof(int));
	char *ptr3 = (char *) malloc(sizeof(char) * 20);
	*ptr2 = 20;
	gets(ptr3);

	printf("%p %d\n", ptr1, *ptr1);
	printf("%p %d\n", ptr2, *ptr2);
	printf("%p %s %c\n", ptr3, ptr3, *ptr3);

	free(ptr2);
	free(ptr3);

	int i = (int) 'A';

	return 0;
}