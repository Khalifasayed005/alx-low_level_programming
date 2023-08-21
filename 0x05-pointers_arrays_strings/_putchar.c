#include <unistd.h>

/**
 * _putchar - writes the character c to print
 * @c: the character to print 
 * Return: on success 1.
 * on error, -1 is rturned, and errno is set appropristely
*/

int _putchar(char c)
{
	return (write(1, &c, 1));
}
