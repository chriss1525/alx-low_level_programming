#include "main.h"
/**
 *rev_string - reverses a string
 *@s: string
*/
void rev_string(char *s)
{
	int c, j, i;
	char k, v;

	for (c = 0; s[c] != '\0'; c++)

	j = c - 1;
	i = 0;

	while (j > i)
	{
		k = s[i];
		v = s[j];
		s[i] = v;
		s[j] = k;
		j--;
		i++;
	}
}
