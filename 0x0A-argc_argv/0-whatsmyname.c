#include <stdio.h>
/**
 * main - Entry point. prints the name of the function
 *
 * @argc: argument count
 * @argv: array of arguments
 *
 * Return: 0 (success)
 */

int main(int argc, char *argv[])
{
	while (argc--)
	{
		printf("%s\n", argv[0]);
	}

	return (0);
}
