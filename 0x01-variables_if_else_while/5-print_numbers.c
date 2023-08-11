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
		printf("%i", digit);
		digit++;
	}
	printf("\n");
	return (0);
}
