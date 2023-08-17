#include <stdio.h>
#include "main.h"

/**
 * main - prints numbers 1 - 100 followed by a new line
 * number that are multiplies of 3 print fizz
 * number that are multiplies of 5 print Buzz
 * number that are multiplies of 3 and 5 print fizzBuzz
 * Return: Always 0 (success)
*/

int main(void)
{
	int num;

	for (num = 1; num <= 100; num++)
	{
		if (num % 3 == 0 && !(num % 5 == 0))
			printf("fizz");
		else if (num % 5 == 0 && !(num % 3 == 0))
			printf("Buzz");
		else if (num % 3 == 0 && num % 5 == 0)
			printf("fizzBuzz");
		else
			printf("%d", num);

		if (num != 100)
			printf(" ");
		else
		printf("\n");
	}
	return (0);
}

