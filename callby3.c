/*#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void func(int(*)[5], int(*)[10], int, int);

int main() {
	int score[4][5] = { {95, 86, 72, 14, 62 } };
	char name[4][10] = { "kim", "lee", "han", "park" };
	srand(time(NULL));
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			score[i][j] = rand() % 101;
			printf("%3d ", score[i][j]);
		}oi
		printf("\n");
	}
	func(score, name, sizeof(score) / sizeof(score[0]), sizeof(score[0]) / sizeof(score[0][0]));

	return 0;
}

void func(int (*score)[5], char (*name)[10], int row, int col) {
	for (int i = 0; i < row; i++)
	{
		printf("%4s ", name + i);
		for (int j = 0; j < col; j++)
		{
			printf("%3d ", *(*(score + i) + j));
		}
		printf("\n");
	}
}*/