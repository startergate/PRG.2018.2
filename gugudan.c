#include "gugudan.h"

int main() {
	int a;
	printf("���ϴ� ���� �Է��ϼ���.(1���� ��ü ���)\n: ");
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