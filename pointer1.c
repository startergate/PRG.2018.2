#include <stdio.h>

/*int main() {
	int i = 10;
	int *ip = &i;
	printf("값: %d, %d\n", i, *ip);
	printf("값: %d, %d\n", i, *ip);
	printf("주소: %p, %p, %p\n", &i, ip, &ip);
	return 0;
}*/

/*int main() {
	int x, y;
	int *ptr = &x;
	printf("%p %p\n", &x, ptr);
	*ptr = 10;
	printf("%d %d\n", x, *ptr);
	ptr = &y;
	printf("%p %p\n", &y, ptr);
	*ptr = 20;
	printf("%d, %d, %d\n", x, y, *ptr);
}*/

int main() {
	int i, *ip;
	float f, *fp;
	double d, *dp;
	char c, *cp;
	
	i = 10, f = 3.14f, d = 5.69, c = 'A';
	ip = &i, fp = &f, dp = &d, cp = &c;
	printf("%d %f %lf %c\n", i, f, d, c);
	printf("%p %p %p %p\n", ip, fp, dp, cp);

	printf("%d\n", ++*ip);
	
	i++, f++, d++, c++;
	printf("%d %f %lf %c\n", i, f, d, c);

	ip++, fp++, dp++, cp++; // 자료형 크기만큼 증가
	printf("%p %p %p %p\n", ip, fp, dp, cp);

	return 0;
}