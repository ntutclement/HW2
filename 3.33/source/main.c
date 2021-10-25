#include<stdio.h>

int main(void)
{
	char sign = '+';
	char sign2 = ' ';
	int i, j,x,y;
	printf("Enter breadth: ");
	scanf_s("%d", &x);
	printf("Enter length: ");
	scanf_s("%d", &y);
	for (i = 0; i < y; i++)
	{
		for (j = 0; j < x; j++)
		{
			if ((i == 0) || (i == y-1) || (j == 0) || (j == x-1))
			{
				printf("%c", sign);
			}
			else
			{
				printf("%c", sign2);
			}
		}
		printf("\n");
	}
	printf("\n");
}