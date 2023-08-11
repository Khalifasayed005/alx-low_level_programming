#include<stdio.h>

/**
 *  main - Entery point
 * Description: A C program that print with put function
 * Return: always 0 (success)
*/

int main(void)
{
	int digit = 0;

	while (digit <= 9)
	{
		/*convert digit to ACCII representation*/
		putchar(digit + '0');
		digit++;
	}
	putchar('\n');
	return (0);
}
