// lab1.3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

#include<stdio.h>
#include<math.h>
int main()
{
	float s1, s2;

	printf("S circle = ");
	scanf_s("%f", &s1);
	printf("S square= ");
	scanf_s("%f", &s2);
	
	if (2 * sqrt(s1 / 3.14) < sqrt(s2)) {
			printf("circle into square");
		}

	else if (sqrt(2 * s1 / 3.14) > sqrt(s2)) {
			printf("square into circle");
		}
	else {
		printf("no one fits");
	}

	return 0;
}