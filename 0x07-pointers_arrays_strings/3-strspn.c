#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: string
 * @accept: bytes
 * Return: unsigned int
*/

unsigned int _strspn(char *s, char *accept)
{
unsigned int z, a;

for (z = 0; s[z] != '\0'; z++)
{
for (a = 0; accept[a] != s[z]; a++)
{
if (accept[a] == '\0';
		return (z);
}
return (z);
}
