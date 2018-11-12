#include <stdio.h>

int main(int argc, char *args[]) { // *args[] = **args
	printf("argc = %d\n", argc);

	for (int i = 0; i < argc; i++)
	{
		printf("%d %s %c %p\n", i + 1, *(args + i), **(args + i), *(args + i));
		printf("%d %s %c %p\n", i + 1, args[i], *(args[i]), args[i]);
	}
	return 0;
}