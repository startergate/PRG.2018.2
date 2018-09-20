/*#include <stdio.h>

int main() {
	int a[3][4] = { 10, 20, 30, 40, 50 };
	int (*ptr)[4]; //2차원 배열과 포인터
	ptr = a;
	for (size_t i = 0; i < 3; i++)
	{
		for (size_t j = 0; j < 4; j++)
		{
			printf("%2d %p ", ptr[i][j], &a[i][j]);
		}
		printf("\n");
	}
	for (size_t i = 0; i < 3; i++)
	{
		for (size_t j = 0; j < 4; j++)
		{
			printf("%2d %p ", *(*(ptr + i) + j), *(ptr + i) + j);
		}
		printf("\n");
	}
	return 0;
}*/

/*#include <stdio.h>

int main() {
	int num[3] = { 10,20,30 };
	int *ptr[3];
	for (int i = 0; i < 3; i++)
	{
		ptr[i] = num + i;
	}
	for (int i = 0; i < 3; i++)
	{
		printf("%p %p %p %p\n", ptr[i], &num[i], *(ptr + i), num + i);
	}
	for (int i = 0; i < 3; i++)
	{
		printf("%d %d %d %d\n", *ptr[i], num[i], *(*(ptr + i)), *(num + i));
	}
}*/

/*#include <stdio.h>

int main() {
	char a[10] = "hello";
	char *p = "hello";
	printf("%s %p\n", a, a);
	printf("%c %p\n", a[1], &a[1]);
	printf("%s %p\n", p, p);
	printf("%c %p\n", *(p + 1), p + 1);
}*/

/*#include <stdio.h>

int main() {
	char name[4][15] = { "apple", "peach", "grape", "watermelon" };
	char *ptr[4] = { "apple", "peach", "grape", "watermelon" };
	for (int i = 0; i < 4; i++)
	{
		printf("%p %s %c\n", name[i], name[i], name[i][0]);
	}
	for (int i = 0; i < 4; i++)
	{
		printf("%p %s %c\n", ptr[i], ptr[i], *ptr[i]);
	}
}*/