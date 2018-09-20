#include <stdio.h>
struct point {
	int x;
	int y;
} p2 = { 20,20 };
int main() {
	struct point pi = { 10, 10 };
	printf("%d %d\n", pi.x, pi.y);
	printf("%d %d\n", p2.x, p2.y);
	return 0;
}