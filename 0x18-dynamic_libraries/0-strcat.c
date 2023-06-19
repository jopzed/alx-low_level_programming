#include "main.h"
/**
* *_strcat - concatenates 2 strings
* @dest:  target string
* @src: what is being added
* Return: returns  dest
*/
char *_strcat(char *dest, char *src)
{
	int x, y;

	for (x = 0; dest[x] != '\0'; x++)
		;
	for (y = 0; src[y] != '\0'; y++)
	{
		dest[x + y] = src[y];
	}
	dest[x + y] = '\0';
	return (dest);
}
