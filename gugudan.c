#include "gugudan.h"

int main() {
	int a;
	printf("원하는 단을 입력하세요.(1단은 전체 출력)\n: ");
	scanf("%d", &a);
	if (a == 1)
	{
		gugudan1();
	}
	else
	{
		gugudanOne(a);
	}
	return 0;
}