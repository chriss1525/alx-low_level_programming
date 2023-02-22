#include "main.h"

/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: number of bytes allocated to s2
 * Return: pointer to new string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i;
	unsigned int size1;
	unsigned int size2;
	char *str;

	size1 = 0;
	size2 = 0;

	if (s1 != NULL)
	{
		for (i = 0; *(s1 + i); i++)
			size1++;
	}

	if (s2 != NULL)
	{
		for (i = 0; *(s2 + i); i++)
			size2++;

		if (size2 > n)
			size2 = n;
	}

	str = malloc((size1 + size2 + 1) * sizeof(char));

	if (str == NULL)
		return (NULL);

	for (i = 0; i < size1; i++)
		*(str + i) = *(s1 + i);

	/* copy s2 to str */
	for (i = 0; i < size2; i++, size1++)
		*(str + size1) = *(s2 + i);

	*(str + size1) = '\0';

	return (str);
}
