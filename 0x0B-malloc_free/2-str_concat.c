#include "main.h"
/**
 * str_concat - merge two strings
 * @s1: first string
 * @s2: sencondstring
 * Return: new string (success) Null (fail)
 */

char *str_concat(char *s1, char *s2)
{
	char *new;
	int i;
	int j = 0;
	int len = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] || s2[i]; i++)
		len++;

	new = malloc(sizeof(char) * len);

	if (new == NULL)
		return (NULL);

	for (i = 0; s1[i]; i++)
		new[j++] = s1[i];

	for (i = 0; s2[i]; i++)
		new[j++] = s2[i];

	return (new);
}
