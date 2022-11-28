#include "main.h"
/**
 * _strcat - Concatenates two strings
 * @dest: destination string
 * @src: source string
 * Return: *dest
 */

char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j;
	
	while (src[i] == '\0')
	{
		for (j = 0; j < *dest; j++)
		{
			_putchar(dest[j]);
			j++;
		}
	}
	return (dest);
}
