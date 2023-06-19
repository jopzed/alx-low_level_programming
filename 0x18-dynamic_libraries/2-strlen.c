#include "main.h"
/**
 * _strlen - returns length of a string
 * @s: string
 * Return: always length
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		s++;
		len++;
	}
	return (len);
}
