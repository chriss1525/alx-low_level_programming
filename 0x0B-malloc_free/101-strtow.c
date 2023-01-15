#include "main.h"
#include <string.h>

int stringwordcount(char *str);

/**
 * strtow - splits string to words
 * @str: string
 * Return: pointer to an array of strings
 */

char **strtow(char *str)
{
	char **s;
	unsigned int i;
	int j = 0;
	int temp = 0;
	int size = 0;
	int words = stringwordcount(str);

	if (words == 0)
		return (NULL);
	s = (char **)malloc(sizeof(char *) * (words + 1));
	if (s != NULL)
	{
		for (i = 0; i <= strlen(str) && words; i++)
		{
			if ((str[i] != ' ') && (str[i] != '\0'))
				size++;
			else if (((str[i] == ' ') || (str[i] == '\0')) && i && (str[i - 1] != ' '))
			{
				s[j] = (char *)malloc(sizeof(char) * size + 1);
				if (s[j] != NULL)
				{
					while (temp < size)
					{
						s[j][temp] = str[(i - size) + temp];
						temp++;
					}
					s[j][temp] = '\0';
					size = temp = 0;
					j++;
				}
				else
				{
					while (j-- >= 0)
						free(s[j]);
					free(s);
					return (NULL);
				}
			}
		}
		s[words] = NULL;
		return (s);
	}
	else
		return (NULL);
}

/**
 * stringwordcount - counts number of words in s tring
 * @str: string
 * Return: number of words in string
 */
int stringwordcount(char *str)
{
	{
		unsigned int i = 0;
		int words = 0;

		while (i <= strlen(str))
		{
			if ((str[i] != ' ') && (str[i] != '\0'))
			{
				i++;
			}
			else if (((str[i] == ' ') || (str[i] == '\0')) && i && (str[i - 1] != ' '))
			{
				words += 1;
				i++;
			}
			else
			{
				i++;
			}
		}
		return (words);
	}
}
