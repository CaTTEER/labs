#include <stdio.h>
#include <math.h>
#include <locale.h>  


int main(void)
{
	float a,b,c;
	printf("input a = 1 < a < 3 \n");

	scanf_s("%f", &a);
	if  (a>1 && a<3)
	{

		for (b = 1, c = 2; b < a; b = b + 1 / c)
		{
			c += 1;
		}
		printf("b=%f", b);
	}
	else 
	{
		printf("incorrect input\n");
		
	}
	
	
	

}