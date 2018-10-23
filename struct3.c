#include <stdio.h>

struct Point {
	int x;
	int y;
};

int equal(struct Point*, struct Point*);
struct Point func();

int main() {
	struct Point pt1 = { 1, 2 };
	struct Point pt2 = { 3, 4 };
	int k;

	pt2 = func();
	k = equal(&pt1, &pt2);

	if (k) printf("same point\n");
	else printf("diff point\n");
}

int equal(struct Point *a, struct Point *b) {
	a -> x = 3;
	a -> y = 4;
	if (a -> x == b -> x && a -> y == b -> y) return 1;
	else return 0;
}

struct Point func() {
	struct Point b = { 1, 2 };
	return b;
}