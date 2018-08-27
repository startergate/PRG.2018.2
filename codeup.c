/*#include <stdio.h>

void printInt(int);

int main() {
	int a;
	scanf("%d", &a);
	printInt(a);
}

void printInt(int n) {
	if (n == 0) return;
	printInt(n - 1);
	printf("%d\n", n);
}*/
// 1901

/*#include <stdio.h>

void printInt(int);

int main() {
	int n;
	scanf("%d", &n);
	printInt(n);
	return 0;
}

void printInt(int n) {
	printf("%d\n", n);
	if (n == 1) return;
	printInt(n - 1);
}*/
// 1902

/*#include <stdio.h>

void print(int, int);

int main() {
	int a, b;
	scanf("%d %d", &a, &b);
	print(a, b);
}

void print(int a, int b) {
	if (a % 2) printf("%d ", a);
	if (a == b) return;
	print(++a, b);
}*/
// 1904

/*#include <stdio.h>

int sum(int);

int main() {
	int n;
	scanf("%d", &n);
	printf("%d", sum(n));
}

int sum(int n) {
	if (n == 1) return 1;
	return n + sum(n - 1);
}*/
// 1905

/*#include <stdio.h>

int fact(int);

int main() {
	int n;
	scanf("%d", &n);
	printf("%d", fact(n));
}

int fact(int n) {
	if (n == 1) return 1;
	return n * fact(n - 1);
}*/
// 1912

/*#include <stdio.h>

int phi(int);

int main() {
	int n;
	scanf("%d", &n);
	printf("%d", phi(n));
}

int phi(int n) {
	if (n <= 2) return 1;
	return phi(n - 1) + phi(n - 2);
}*/
// 1915

/*#include <stdio.h>

void print(int);

int main() {
	int n;
	scanf("%d", &n);
	print(n);
}

void print(int n) {
	printf("*");
	if (n == 1) return;
	print(--n);
}*/
// 1851

/*#include <stdio.h>

void printInt(int);

int main() {
	int n;
	scanf("%d", &n);
	printInt(n);
	return 0;
}

void printInt(int n) {
	if (n == 0) return;
	printInt(n - 1);
	printf("%d ", n);
}*/
// 1852

/*#include <stdio.h>

int sum(int);

int main() {
	int n;
	scanf("%d", &n);
	printf("%d", sum(n));
}

int sum(int n) {
	if (n == 1) return 1;
	return n + sum(n - 1);
}*/
// 1853

/*#include <stdio.h>

long long int llsum(long long int);

int main() {
	long long int n;
	scanf("%lld", &n);
	printf("%lld", llsum(n));
}

long long int llsum(long long int n) {
	if (n == 0) return 0;
	return n % 10 + llsum(n / 10);
}*/
// 1854

/*#include <stdio.h>

int main() {
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		printf("hello\n");
	}
}*/
// 1735

/*#include <stdio.h>
#include <string.h>

int main() {
	char str[21];
	scanf("%s", str);
	for (int i = strlen(str)- 1; i >= 0; i--)
	{
		printf("%c", str[i]);
	}
}*/
// 1752

/*#include <stdio.h>

int main() {
	int a, b, sum = 1;
	scanf("%d %d", &a, &b);
	printf("%.1f\n", (float)a / b);
	printf("%d\n", a / b);
	for (int i = 0; i < b; i++)
	{
		sum *= a;
	}
	printf("%d\n", sum);
}*/
// 1732