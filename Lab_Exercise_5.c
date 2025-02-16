
/*
Lab Exercise 5

Problem Statement
Write a program to calculate the sum of digits of a user-entered number. Ensure that your program scans not
more than 4 digits. Also print the output in following manner.
For example, if the number is 1234, output should be 10.
*/

#include<stdio.h>

int main() {
	int num,n1, n2, n3, n4;
	printf("\nEnter only 4 digits = ");
	scanf_s("%4d", &num);

	n1 = num % 10;
	num /= 10;

	n2 = num % 10;
	num /= 10;

	n3 = num % 10;
	num /= 10;

	n4 = num % 10;
	num /= 10;

	int sum = n1 + n2 + n3 + n4;

	printf("\nEntered Num. %d + %d + %d + %d = %d\n",n4,n3,n2,n1,sum);

	return 0;
}