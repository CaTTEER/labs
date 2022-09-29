// lab1.1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<stdio.h>
int main()
{
	int R, L, h;
	float Sb, Sp, V;

	printf("input R, L, h:\n");
	scanf_s("%d%d%d", &R, &h, &L);

	Sb = (3.14 * R * L);
	Sp = (3.14 * R * L + 3.14 * R * R);
	V = 1.0 / 3 * 3.14 * R * R * h;
	printf("Sb= %.3f \n", Sb);
	printf("Sp= %.3f \n", Sp);
	printf("V= %.3f \n", V);

	return 0;
}