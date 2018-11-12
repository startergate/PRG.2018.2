#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *args[]) {
	int i;
	double d;

	i = atoi(args[1]);
	d = atof(args[2]);

	printf("%d + %.2f = %.2f\n", i, d, i + d);
	printf("%d - %.2f = %.2f\n", i, d, i - d);
	printf("%d * %.2f = %.2f\n", i, d, i * d);
	printf("%d / %.2f = %.2f\n", i, d, i / d);
	return 0;
}