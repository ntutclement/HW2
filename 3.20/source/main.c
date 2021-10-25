#include<stdio.h>

int main(void)
{
	int hours;
	float rate, salary;

	printf("Enter # of hours worked(-1 to end): ");
	scanf_s("%d", &hours);
	printf("Enter hourly rate of the worker ($00.00): ");
	scanf_s("%f", &rate);

	while (hours != -1)
	{
		if (hours <= 40)
		{
			salary = hours * rate;
			printf("Salary is $%.2f\n", salary);
		}
		if (hours > 40)
		{
			salary = 40 * rate + (hours - 40) * 15;
			printf("Salary is $%.2f\n", salary);
		}
		printf("\n");
		printf("Enter # of hours worked(-1 to end): ");
		scanf_s("%d", &hours);
		printf("Enter hourly rate of the worker ($00.00): ");
		scanf_s("%f", &rate);
	}
}