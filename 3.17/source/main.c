#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int ac;
	float ch, cr, lim, bal,nb;
		printf("Enter account number (-1 to end): ");
		scanf_s("%d", &ac);
		printf("Enter begining balance:");
		scanf_s("%f", &bal);
		printf("Enter total charges¡G ");
		scanf_s("%f", &ch);
		printf("Enter total credits: ");
		scanf_s("%f", &cr);
		printf("Enter credit limit: ");
		scanf_s("%f", &lim);

		while (ac != -1)
		{
			nb = bal + ch - cr;
			printf("Account	:%d\n", ac);
			printf("Credit limit:%.2f\n", lim);
			printf("Balance	:%.0f\n", nb);
			if (lim < nb)
			printf("Credit Limit Exceeded.\n");

			printf("Enter account number (-1 to end): ");
			scanf_s("%d", &ac);
			printf("Enter begining balance: ");
			scanf_s("%f", &bal);
			printf("Enter total charges: ");
			scanf_s("%f", &ch);
			printf("Enter total credits: ");
			scanf_s("%f", &cr);
			printf("Enter credit limit: ");
			scanf_s("%f", &lim);
		}
		system("pause");
		return 0;
}