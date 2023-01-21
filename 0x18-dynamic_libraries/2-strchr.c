#include "main.h"
#include "stddef.h"
/**
 * _strchr - locates a character in a string
 * @s: string
 * @c: character
 * Return: pointer to c
 */
char *_strchr(char *s, char c)
{
	while (*s || *s == c)
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}

	return (NULL);
}
