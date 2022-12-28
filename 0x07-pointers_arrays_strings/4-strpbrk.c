#include "main.h"
/**
 * _strpbrk- searches a string for any of a set of bytes
 * @s: first set of strings
 * @accept: second string
 * Return: pointer to byte in s (Success) Null (fail)
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int i;
	unsigned int j = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (accept[j] == s[i])
				return (&s[i]);
		}
	}
	return (NULL);
}
