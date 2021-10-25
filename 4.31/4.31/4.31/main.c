#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i,y;
	for (y = 1; y <=5; y++) {
		for (i = 0; i < (5 - y); i++) printf(" ");
		for (i = 0; i < (y * 2 - 1); i++) printf("*");
		printf("\n");
	}
	for (y = 4; y >0; y--) {
		for (i = 0; i < (5 - y); i++) printf(" ");
		for (i = 0; i < (y * 2 - 1); i++) printf("*");
		printf("\n");
	}
	return 0;
}