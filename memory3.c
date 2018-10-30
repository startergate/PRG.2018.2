#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct Point {
	int x, y;
};
int main() {
	struct Point p1 = { 1, 2 };
	struct Point p2;
	memcpy(&p2, &p1, sizeof(p1));
	printf("%d %d/ %d %d", p1.x, p1.y, p2.x, p2.y);

	struct Point *ptr1 = (struct Point *) malloc(sizeof(struct Point));
	struct Point *ptr2 = (struct Point *) malloc(sizeof(struct Point));
	ptr1-> x = 3;
	ptr1->y = 4;

	memcpy(ptr2, ptr1, sizeof(struct Point));
	printf("%d %d/ %d %d", ptr1 -> x, ptr1 -> y, ptr2  -> x, p2 -> y);
	return 0;
}