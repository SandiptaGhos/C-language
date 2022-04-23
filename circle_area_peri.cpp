//write a c program to compute the perimeter and area of a circle with a given radius

#include<stdio.h>
int main()
{
	int radius;
	float area,perimeter;
	radius=4;
	perimeter=2*3.14*radius;
	printf("perimeter of the circle=%f inches\n",perimeter);
	area=3.14*radius*radius;
	printf("Area of the circle=%f square inches\n",area);
	return 0;
}

