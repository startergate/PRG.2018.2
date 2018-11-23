#include <stdio.h>

void func();
void func2(char*);

int main() {
	void(*fp1)(); //함수 포인터 선언
	fp1 = func;
	(*fp1)(); //함수 사용
	fp1(); //역시 사용
	func();

	printf("%p\n", func);

	void(*fp2)(char*);
	fp2 = func2;
	fp2("씨발 이거 완전히 좆됬네");
	return 0;
}

void func() {
	printf("hello\n");
	return;
}

void func2(char *s) {
	printf("%s\n", s);
}