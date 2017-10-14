#include<stdio.h>
#include<math.h>

int main(void)
{
	double amount;
	double principal = 5000.0;
	double rate;
	int  year = 15;

	printf("%4s%21s\n", "Rate", "Amount on deposit");

	for (rate = .1; rate <= .125; rate += .005)
	{
		amount = principal*pow(1.0 + rate, year);
		printf("%.3f%20.2f\n", rate, amount);
	}

	system("pause");
	return 0;
}