#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define lim 1

int ten(int a) {
	int res = 1;
	while (a > 0) {
		a--;
		res *= 10;
	}
	return res;
}

int main()
{
	srand(time(NULL));
	float arr[100], prod = 1, sum = 0;
	int n, choice, flag = 0;
	printf("Random-1\nKeyboard-2\n");
	while (scanf_s("%d", &choice) != 1 || (choice != 1 && choice != 2)) {
		printf("Wrong input\n");
		rewind(stdin);
	}
	printf("Size of array\n");
	while (scanf_s("%d", &n) != 1 || n < 1 || n>100) {
		printf("Wrong input\n");
		rewind(stdin);
	}
	if (choice == 2) {
		for (int i = 0; i < n; i++) {
			printf("%d element ", i + 1);
			while (scanf_s("%f", &arr[i]) != 1) {
				printf("Wrong input\n");
				rewind(stdin);
			}
			if (arr[i] < 0) {
				prod *= arr[i];
				flag++;
			}
		}
	}
	else
		for (int i = 0; i < n; i++) {
			arr[i] = rand() % (2 * lim * ten(4) + 1) - lim * ten(4);
			arr[i] /= ten(2);
			printf("%.2f\n", arr[i]);
			if (arr[i] < 0) {
				prod *= arr[i];
				flag++;
			}
		}

	int t = 0;
	float positive = 1;

	for (; t != 10;)
	{
		if (arr[t]>0) 
		{
		positive *= arr[t];
		}
		t++;
	} 

	printf_s("%.2f\n", positive);
}