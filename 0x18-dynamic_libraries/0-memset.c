#include "main.h"
/**
 * _memset - fill memory with  constant byte
 * @s:  area being looked at
 * @b:  byte filling memory
 * @n:  amount of memory being filled
 * Return: the new memory
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *p = s;

	while (n--)
	{
		*p++ = b;
	}
	return (s);
}
