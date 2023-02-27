#include "3-calc.h"

/**
 * main - entry point to the program that performs simple operations
 *
 * @argc: number of command line arguements passed when executing the program
 * @argv: pointer to array of command line arguements
 *
 * Return: Always 0 for success
 */
int main(int argc, char *argv[])
{
	int (*op_func)(int, int);
	int ans;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	op_func = get_op_func(argv[2]);

	if (op_func == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	ans = op_func(atoi(argv[1]), atoi(argv[3]));

	printf("%d\n", ans);
	return (0);
}
