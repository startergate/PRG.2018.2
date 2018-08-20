#include <stdio.h>
//void print(int);
//int sum(int);
long long int fact(int);

/*int main() {
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

/*int main() {
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
}