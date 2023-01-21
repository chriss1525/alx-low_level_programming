#include "main.h"
/**
 * _memcpy - copies n bytes from memory area src to area dest
 * @dest: destination memory area
 * @src: source memory area
 * @n: index
 * Return: destination pointer
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
