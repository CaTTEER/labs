// lab1.1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<stdio.h>


int main()
{
    int r, l, h, side, square, circle, volume, pi;

    printf_s(" %d input radius = ");
    scanf("%d", &r);
    printf("input lenght=");
    scanf("%d", &l);
    printf("input height=");
    scanf("%d", &h);


    circle = pi * r ^ 2;
    side = pi * r * l;
    square = circle + side;
    volume = h * circle / 3;
    printf("side square=%d\n", side);
    printf("full square=%d\n", square);
    printf("volume=%d\n", volume);

}