#include "main.h"
#include <string.h>
/**
 * argstostr - concatenates all arguments
 * @ac: count of arguments passed
 * @av: array of arguments
*/

char *argstostr(int ac, char **av)
{
		char *new = NULL;
		int k = 0;
        int i = ac;
        int j;
        int sum = 0;
        int temp = 0;

		if (ac == 0 || av == NULL)
			return (NULL);

		while (ac--)
			sum += (strlen(av[ac]) + 1);
		new = (char *) malloc(sum + 1);

		if (new != NULL)
		{
			while (k < i)
			{
				for (j = 0; av[k][j] != '\0'; j++)
					new[j + temp] = av[k][j];
				new[temp + j] = '\n';
				temp += (j + 1);
				k++;
			}
			new[temp] = '\0';
		}
		else
		{
			return (NULL);
		}
		return (new);
}
