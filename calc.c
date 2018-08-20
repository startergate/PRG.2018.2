#include "calc.h"

int main() {
	int n, m;
	printf("두 수를 입력하세요.\n");
	scanf("%d %d", &n, &m);
	add(n, m);
	sub(n, m);
	mul(n, m);
	div(n, m);

	return 0;
}






