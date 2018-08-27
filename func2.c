#include <stdio.h>


/*void print(int);

int sum(int);

int main() {
	//int n;
	//scanf("%d", &n);
	//print(n);
}

int i;

void print(int a) {
	printf("%d ", i);
	if (a != i && a) {
		i++;
		print(a);
	}
}*/

/*int sum(int);

int main() {
	int n;
	scanf("%d", &n);
	printf("%d", sum(n));
}
int total = 0;
int sum(int n) {
	if (n == 1)
	{
		return 1;
	}
	else
	{
		return n + sum(n - 1);
	}
}*/

/*long long int fact(int);

int main() {
	int n;
	scanf("%d", &n);
	printf("%lld", fact(n));
}
long long int total = 1;
long long int fact(int n) {
	if (n == 1)
	{
		return 1;
	}
	else
	{
		return n * fact(n - 1);
	}
}*/

/*int print(int);

int main() {
	int k;
	scanf("%d", &k);
	print(k);
}

int print(int n) {
	
	if (n != 1) print(n - 1);
	printf("%d\n", n);
	return 0;
}*/

/*int fibo(int);

int main() {
	int a;
	scanf("%d", &a);
	printf("%d", fibo(a));
}

int fibo(int n) {
	if (n <= 0)
	{
		return -1;
	}
	if (n <= 2)
	{
		return 1;
	}
	return fibo(n - 1) + fibo(n - 2);
}*/

/*int gcm(int, int);

int main() {
	int a, b;
	scanf("%d %d", &a, &b);
	printf("%d\n", gcm(a, b));
}

//int gcm(int a, int b) {
//	int temp;
//	while (b)
//	{
//		temp = a;
//		a = b;
//		b = temp % b;
//	}
//	return a;
//}

int gcm(int a, int b) {
	if (!b) return a;
	return gcm(b, a % b);
}*/

