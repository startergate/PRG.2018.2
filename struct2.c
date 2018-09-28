#include <stdio.h>
#include <string.h>

struct date {
	int year;
	int month;
	int day;
};

struct stu {
	int num;
	char name[10];
	struct date birth;
};

int main() {
	//struct stu s1 = { 1, "È«±æµ¿", 2002, 03, 16 };
	//struct stu s2;
	//s2.num = 2;
	//strcpy(s2.name, "È«ÁØ¼®");
	//s2.birth.year = 2002;
	//s2.birth.month = 5;
	//s2.birth.day = 31;
	//printf("%d %s", s2.num, s2.name);

	//struct stu s1[2];
	//
	//for (int i = 0; i < 2; i++)
	//{
	//	scanf("%d %s %d %d %d", &s1[i].num, s1[i].name, &s1[i].birth.year, &s1[i].birth.month, &s1[i].birth.day);
	//}
	//for (int i = 0; i < 2; i++)
	//{
	//	printf("%d %s %d %d %d\n", s1[i].num, s1[i].name, s1[i].birth.year, s1[i].birth.month, s1[i].birth.day);
	//}

	struct stu s1 = { 1, "ÃÖÈ£½Â", 2003, 3, 8 };
	struct stu *ptr;
	ptr = &s1;

	printf("%d %s\n", s1.num, s1.name);
	printf("%d %s\n", (*ptr).num, (*ptr).name);
	printf("%d %s\n", ptr -> num, ptr -> name);
}