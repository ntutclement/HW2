#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(void)
{
	
	double prin=5000;
	double rate = 0.1;

	printf("%4s%21s\n", "Year", "Amount of deposit");
	
	while (rate < 0.125) {
		printf("rate=  %.3f\n",rate);

	
	for (unsigned int year = 1; year <= 15; year++)
	{
		double amount = prin * pow(1.0 + rate, year);
		printf("%4u%21.2f\n", year, amount);
	}
	rate += 0.005;
}

	return 0;
}
