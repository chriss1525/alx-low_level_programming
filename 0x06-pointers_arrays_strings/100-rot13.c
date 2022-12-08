#include "main.h"
/**
 * 
*/
char *rot13(char *s)
{
    char *s1 = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char *s2 = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

    int i;
    int j;

    for (i = 0; *(s + i); i++)
	{
		for (j = 0; j < *s; j++)
		{
			if (s1[j] == *(s + i))
			{
				*(s + i) = s2[j];
				break;
			}
		}
	}
	return (s);
}