//Accept a character from the user. It may be an alphabet, digit or any other character. Print its ASCII value.

#include<stdio.h>

int main() {
	char ch;
	printf("\nEnter Character = ");
	
	scanf_s("%c", &ch,1);

	printf("\nASCII Value =  %d\n",ch);
	return 0;
}