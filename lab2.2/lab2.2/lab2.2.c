#include<stdio.h>

int main() {

	int m,n,a,b;
	a = 0;
	b = 1;
	m = 1;

	printf("input the number of cycles\n");
	scanf_s("%d", &n);

	for (; n >= m;) 
	{
		a = a + m * b;
		b = m * b;
		m++;
	}
	printf("result= %d", a);
	






}