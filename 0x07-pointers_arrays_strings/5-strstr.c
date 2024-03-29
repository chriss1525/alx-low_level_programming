#include "main.h"
/**
 * _strstr- locates a substring
 * @haystack: string
 * @needle: second string
 * Return:  pointer to the beginning of the located substring,
 * or NULL, if substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
	char *h = haystack;
	char *n = needle;

	while (*h)
	{
		n = needle;
		h = haystack;
		while (*n)
		{
			if (*h == *n)
			{
				n++;
				h++;
			}
			else
				break;
		}
		if (*n == '\0')
			return (h);
		h++;
	}
	return (NULL);
}
