#include <iostream>

#include "Point.h"



void swap(int& a, int& b)
{
	int c;
	c = a;
	a = b;
	b = c;
}

int main(int argc, char** argv)
{
	Point a, b;

	a.x = 1;
	a.y = 2;

	b.x = 1;
	b.y = 2;

	if (a != b)
	{
		printf("Son diferents");

	}
	else
	{
		printf("Son iguals");
	}

	getchar();
	return 0;
}