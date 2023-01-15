#include "main.h"
/**
 * _strdup - duplicate string
 * @str: string
 * Return: pointer to duplicated string (scccess) NULL (fail)
 */
char *_strdup(char *str)
{
	char *str2;
	int i;
	int len;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		len++;
	str2 = malloc(sizeof(char) * (len + 1));

	if (str2 == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
	{
		str2[i] = str[i];
	}

	str2[len] = '\0';

	return (str2);
}
