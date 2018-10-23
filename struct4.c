#include <stdio.h>

typedef struct Employee {
	char *name;
	int age;
	char *addr;
} EMP;

int main() {
	EMP emps[3] = { { "kim", 20, "Seoul" }, { "choi", 30, "Busan" }, { "hong", 50, "New York" } };
	EMP *ptr = emps;
	for (int i = 0; i < 3; i++)
	{
		printf("%s %d %s\n", ptr -> name, ptr -> age, ptr -> addr);
		ptr++;
	}
	printf("%d\n", (int) sizeof(EMP));
}