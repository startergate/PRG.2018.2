#include "gugudan.h"

void gugudan1(void)
{
	for (int i = 3; i < 9; i++)
	{
		for (int j = 1; j <= 9; j++)
		{
			printf("%d X %d = %d\n", i, j, i*j);
		}
	}
}