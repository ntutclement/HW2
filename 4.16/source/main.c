#include <stdio.h>
int main(void) {
	int i, j,n;
	printf("(A) \n");
	for (i = 0; i <= 9; i++) 
	{
		for (j = 0; j <= i; j++) {
			printf("*");
		}
		printf("\n");
	}
	printf("(B) \n");
	for (i = 0; i <= 9; i++) 
	{
		for (j = i; j <= 9; j++) {
			printf("*");
		}
		printf("\n");
	}
	printf("(C) \n");
	for (i = 0; i <= 9; i++) 
	{
		for (j = 1; j <= 10; j++) {
			if (j <= i) {
				printf(" ");
			}
			else {
				printf("*");
			}
		}
		printf("\n");
	}
	printf("(D) \n");
	for (i = 0; i <= 9; i++) 
	{
		for (j = 1; j <= 9 - i; j++) {
			printf(" ");
		}
		for (n = 0; n <= i; n++) {
			printf("*");
		}
		printf("\n");
	}
	return 0;
}