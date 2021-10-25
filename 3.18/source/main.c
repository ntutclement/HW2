#include <stdio.h>
#include <stdlib.h>

int main()
{     
	float salesD,salary;                                                       

	printf("Enter sales in dollars (-1 to end):");
	scanf_s("%f", &salesD);
	
	while (salesD != -1) {
		salary = 200 + salesD * 0.09;
		printf("Salary is:%.2f\n", salary);

		printf("Enter account number (-1 to end):");
		scanf_s("%f", &salesD);
	}
	system("pause");
	return 0;
}