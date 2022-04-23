//write a c program to compute the perimeter and area of rectangle with a height of 7 inches and width of 5 inches

#include<stdio.h>
int width=0;
int height=0;
int area=0;
int perimeter=0;
int main()
{
	height=7;
	width=5;
	perimeter=2*(height+width);
	printf("Perimeter of the rectangle=%d inches\n",perimeter);
	area=height*width;
	printf("Area of the rectangle=%d square inches\n",area);
	return 0;
}

