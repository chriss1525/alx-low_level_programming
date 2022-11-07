#include <stdio.h>
/**
 * main - Entry point. prints the name of the function
 *
 * @argc: vector of argument given
 * @argv: array of command line functions
 *
 * Return: 0 (success)
 */

int main(int argc, char *argv[])
{
	while (argc--)
	{
		printf("My name is \"%s\".\n", argv[0]);
	}

	return (0);
}
