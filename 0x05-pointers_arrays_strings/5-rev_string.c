#include "main.h"
/**
 *rev_string - reverses a string
 *@s: string
 */
void rev_string(char *s)
{
	int c = 0, j = 0;
	char n[500];

	while (*(s + c) != '\0')
	{
		n[c] = *(s + c);
		c++;
	}

	c--;

	while (c >= 0)
	{
		*(s + j) = n[c];
		c--;
		j++;
	}
}
