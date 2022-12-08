#include "main.h"
/**
 * rot13 - encodes string
 * @s: string
 * Return: new encoded string
 */
char *rot13(char *s)
{
	char *str1 = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char *str2 = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	int i;
	int j;

	for (i = 0; *(s + i); i++)
	{
		for (j = 0; j < *s; j++)
		{
			if (str1[j] == *(s + i))
			{
				*(s + i) = str2[j];
				break;
			}
		}
	}
	return (s);
}
