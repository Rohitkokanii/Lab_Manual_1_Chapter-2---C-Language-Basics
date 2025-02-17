//Write a program to swap two variables using a third variable and without using third variable.

#include<stdio.h>

int main() {
	//swapping using third variable
	printf("\n\nwapping using third variable\n\n");

	int a;
	int b;

	a = 10;
	b = 20;
	printf("\nBefoure Swapping a = %d b = %d\n",a,b);

	int temp = a;
	a = b;
	b = temp;

	printf("\nAfter Swapping a = %d b = %d\n", a, b);

	//without using thired variable
	printf("\n\nWithout using thired variable\n\n");

	int x = 10;
	int y = 20;

	printf("\nBefoure Swapping x = %d y = %d\n",x,y);

	y = x + y;

	x = y-x;

	y = y - x;

	printf("\nAfter Swapping x = %d y = %d\n", x, y);
	return 0;
}