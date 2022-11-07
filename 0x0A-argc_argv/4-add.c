#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - entry point. adds postive numbers
 * @argc: argument count
 * @argv: array of arguments
 * Return: 0 (success)
 */
int main(int argc, char *argv[])
{
	int i, j, c;
	c = 0;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
		}
		c += atoi(argv[i]);
	}
	printf("%d\n", c);
	return (0);
}
