#include<stdio.h>
int main()
{
	float amount;
	int metr;
	printf("1- dm\n2- km\n3- m\n4- mm\n5- cm\n");
	scanf_s("%d", &metr);
	if (metr < 1 || metr > 5)
	{
		printf("wrong");
		return 0;
	}
	printf("amount:\n");
	scanf_s("%f", &amount);
	if (metr == 1)
	{
		amount /= 10;
	}
	else if (metr == 2)
	{
		amount *= 1000;
	}
	else if (metr == 3)
	{
		amount *= 1;
	}
	else if (metr == 4)
	{
		amount /= 1000;
	}
	else if (metr == 5)
	{
		amount /= 100;
	}

	printf("meters = %f\n", amount);
	return 0;

}