#include <stdio.h>
#include <stdlib.h>
int i = 1;

int main(void)
{
	int integer1;
	int integer2;
	int summa;

	printf("Enter the first number\n");
	scanf("%d", &integer1);

	printf("Enter the second number\n");
	scanf("%d", &integer2);

	summa = integer1 + integer2;

	printf("Sum of numbers \n%d", summa);
	getchar();
	getchar();
	return EXIT_SUCCESS;
}