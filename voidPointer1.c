#include <stdio.h>
#include <string.h>

int main() {
	int n = 10;
	char ch = 'A';
	int arr[3] = { 10, 20, 30 };
	char s[] = "festival";
	void *ptr = &n;

	printf("%d\n", *(int *) ptr);

	ptr = &ch;

	printf("%c\n", *(char *) ptr);

	ptr = arr;

	for (int i = 0; i < 3; i++)
	{
		printf("%d\n", *((int *)ptr + i));
	}

	ptr = s;
	for (int i = 0; i < strlen(s); i++)
	{
		printf("%c", *((char *)s + i));
	}
	printf("%s\n", (char *)s);
	return 0;
}