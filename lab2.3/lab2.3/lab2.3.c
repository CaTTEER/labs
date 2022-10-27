#include <stdio.h>


int main(void)
{
	int a, b, c, n;
	
	scanf_s("%d%d%d", &a, &b, &c);
	for (n=0 ;a >= c && b >= c;n++ )
	{
		a = a - c;
		b = b - c;
	}
	printf("%d", n);




}