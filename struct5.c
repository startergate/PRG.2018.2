// 자기 참조 구조체
#include <stdio.h>
typedef struct Employee {
	char *name;
	int age;
	char *addr;
	struct Employee *next;
} EMP;
int main() {
	EMP emps1 = { "kim", 20, "Seoul" };
	EMP emps2 = { "choi", 30, "Busan" };
	EMP emps3 = { "hong", 50, "Jeju" };
	emps1.next = &emps3;
	emps3.next = &emps2;
	emps2.next = NULL;
	EMP *ptr = &emps1;
	while (ptr)
	{
		printf("%s %d %s\n", ptr->name, ptr->age, ptr->addr);
		ptr = ptr -> next;
	}
	return 0;
}