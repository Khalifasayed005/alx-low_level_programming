#include <stdio.h>
/**
 * main - Entery point
 * Description: A C program that print with put function
 * Return: always 0 (success)
 */
int main(void)
{
printf("Size of a char: %u byte(s)\n", sizeof(char));
printf("Size of a int: %u byte(s)\n", sizeof(int));
printf("Size of a long int: %u byte(s)\n", sizeof(long int));
printf("Size of a long long in: %u byte(s)\n", sizeof(long long int));
printf("Size of afloat: %u byte(s)\n", sizeof(float));
return (0);
}
