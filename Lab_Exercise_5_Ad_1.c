//Write a program to add two numbers and store the result in a third variable. Print the result.

#include<stdio.h>

int main() {
	int n1, n2;
	printf("Enter Two Nums. = ");
	scanf_s("%d%d", &n1, &n2);

	int add = n1 + n2;

	printf("\nAddition in Third Variable = %d\n",add);

	return 0;
}