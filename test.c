#include <stdio.h>
#include <stdlib.h>
int i = 1;

int main(void)
{
   int integer1;
   int integer2;
   int integer3;
   int summa;

   printf("Enter the first number\n");
   scanf("%d", &integer1);

   printf("Enter the second number\n");
   scanf("%d", &integer2);

   printf("Enter the third number\n");
   scanf("%d", &integer3);

   summa = integer1 + integer2 + integer3;

   printf("Sum of numbers \n%d", summa);
   getchar();
   getchar();
   return EXIT_SUCCESS;
}