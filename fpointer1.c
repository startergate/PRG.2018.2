#include <stdio.h>

void func();
void func2(char*);

int main() {
	void(*fp1)(); //�Լ� ������ ����
	fp1 = func;
	(*fp1)(); //�Լ� ���
	fp1(); //���� ���
	func();

	printf("%p\n", func);

	void(*fp2)(char*);
	fp2 = func2;
	fp2("���� �̰� ������ �����");
	return 0;
}

void func() {
	printf("hello\n");
	return;
}

void func2(char *s) {
	printf("%s\n", s);
}