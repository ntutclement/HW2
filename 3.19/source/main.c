#include<stdio.h>

int main(void)
{
	int days;
	float prin, rate, interest;
	printf("Enter loan principal(-1 to end): ");
	scanf_s("%f", &prin);
	printf("Enter interest rate: ");
	scanf_s("%f", &rate);
	printf("Enter term of the loan in days: ");
	scanf_s("%d", &days);

	while (prin != 1)
	{
		interest = prin * rate*days / 365;
		printf("The interest charge is $%.2f\n", interest);
		printf("\n");

		printf("Enter loan principal: ");
		scanf_s("%f", &prin);
		printf("Enter interest rate: ");
		scanf_s("%f", &rate);
		printf("Enter term of the loan in days: ");
		scanf_s("%d", &days);
	}
}