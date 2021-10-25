#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int a, b, c;
	printf("斜邊	邊長	邊長\n");

	for (c = 1; c <= 500; c++)
	{
		for (a = 1; a < c; a++)
		{
			for (b = 1; b < c; b++) {
				if (c * c == a*a + b*b )
				printf("%d	%d	%d\n", c, a, b);
			}
		}
	}
}