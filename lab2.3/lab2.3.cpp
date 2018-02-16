// lab2.3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


int main()

{
	double a = -3, b = 3, c =1, d = 2, hx = 0.25, hy = 0.15;
	printf("%c\\%c", 'Y', 'X');
	for (double x = a; x <= b; x += hx) {
		printf("\t%8.2f", x);
	}
	printf("\n");
	for (double y = c; y <= d; y += hy) {
		printf("%.2f", y);
		for (double x = a; x <= b; x += hx) {
			double z = sqrt(x*(y+1))/(x - y);
			printf("\t%8.2f", z);
		}
		printf("\n");
	}
	printf("\n");
	getchar();
    return 0;
}

