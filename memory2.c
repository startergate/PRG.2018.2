#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct Point {
	int x, y;
};
int main() {
	//long long *ptr = malloc(sizeof(long long));

	//memset(ptr, 0x17, 8);
	//printf("%llx\n", *ptr);

	//struct Point p1 = { 0, };
	struct Point p1;
	struct Point *p2 = malloc(sizeof(struct Point));
	memset(&p1, 0, sizeof(p1));
	memset(p2, 0, sizeof(p2));
	printf("%d %d\n", p1.x, p1.y);
	printf("%d %d\n", p2 -> x, p2 -> y);
	free(p2);

	return 0;
}