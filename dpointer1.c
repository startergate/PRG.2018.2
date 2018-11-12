#include <stdio.h>

char *word = "A piece of cake";

void func(char **temp);

int main() {
	//int n = 10;
	//int *p = &n;
	//int **pp = &p;

	//printf("%d %d %d\n", n, *p, **pp);
	//printf("%p %p %p\n", &n, p, *pp);
	//printf("%p %p %p\n", &p, pp, &pp);

	char *temp = "test";

	puts(temp);
	func(&temp);
	puts(temp);
	return 0;
}

void func(char **temp) {
	*temp = word;
	puts(*temp);
}