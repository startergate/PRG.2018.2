#include <stdio.h>

void func(char **);

int main() {
	char *ptr[] = { "Seoul", "Busan", "Jeju", "Daejeon", NULL };
	
	func(ptr);
	return 0;
}

void func(char **ptr) {
	while (*ptr) {
		printf("%p %p %s %c\n", ptr, *ptr, *ptr, **ptr);
		ptr+
}