#include <stdio.h>
/**
 * main - entry point prints arguments passed
 * @argc: argument count
 * @argv: array of arguments passed
 * Return: 0 (success)
 */
int main(int argc, char *argv[])
{
	while (argc--)
	{
		printf("%s\n", *argv++);
	}
	return (0);
}
