#include <stdio.h>
#include <string.h>

void voidDelete(char*);

int main() {
	char str[64];

	gets(str);

	voidDelete(str);

	printf("%s", str);
}

void voidDelete(char *str) {
	int length = strlen(str);
	for (int i = 0; i < length; i++)
	{
		if (str[i] == ' ')
		{
			for (int j = i; j < length-1; j++)
			{
				str[j] = str[j + 1];
			}
			length--;
		}
		if (str[i] == ' ')
		{
			i--;
		}
	}
	str[length] = 0;
}