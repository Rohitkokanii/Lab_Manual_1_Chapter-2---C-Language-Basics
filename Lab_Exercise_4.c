// Write a program to accept marks of 5 subjects from the user and calculate their average. 
// Use implicit and explicit type conversion.


#include<stdio.h>

int main() {
	int s1, s2, s3, s4, s5;
	printf("Enter 5 Sub Marks = ");
	scanf_s("%d%d%d%d%d",&s1,&s2,&s3,&s4,&s5);


	float avg = ((float)s1 + s2 + s3 + s4 + s5) / 5;

	printf("\nAverage of Marks = %f \n",avg);
	return 0;
}