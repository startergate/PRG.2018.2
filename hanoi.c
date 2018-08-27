/*#include <stdio.h>

void hanoi(int, char, char, char);

int main() {
	int n;
	printf("원판의 수: ");
	scanf("%d", &n);
	hanoi(n, 'a', 'b', 'c');
}

void hanoi(int n, char from, char temp, char to) {
	if (n == 1)
	{
		printf("%d번 원판: %c -> %c\n", n, from, to);
	}
	else
	{
		hanoi(n-1, from, to, temp);
		printf("%d번 원판: %c -> %c\n", n, from, to);
		hanoi(n-1, temp, from, to);
	}
}*/