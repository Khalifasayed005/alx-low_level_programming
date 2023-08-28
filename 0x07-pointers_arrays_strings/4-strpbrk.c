#include "main.h"

/**
 * *_strpbrk - searches a string for any of a set of bytes
 * @s: string
 * @accept: string to match
 * Return: pointer to the byte in s
 * that matches one of the bytes  in accept  or NULL
*/

char *_strpbrk(char *s, char *accept)
{
unsigned int z;

itr = 0;
while (accept[itr] != '\0')
{
jtr = 0;
while (accept[jtr] != '\0')
{
if (accept[jtr] == s[itr])
{
p = &s[itr];
return (p);
}
jtr++;
}
jtr++;
}
}
