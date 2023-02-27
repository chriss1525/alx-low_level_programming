#include "3-calc.h"

/**
 * op_add - returns the sum of a and b
 *
 * @a: int
 * @b: int
 *
 * Return: int, sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtracts a and b
 *
 * @a: int
 * @b: int
 *
 * Return: int, subtracts a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplies a and b
 *
 * @a: int
 * @b: int
 *
 * Return: int, multiplication of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div- divides a and b
 *
 * @a: int
 * @b: int
 *
 * Return: int, division of a and b
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - returns remainder for when a and b are divided
 *
 * @a: int
 * @b: int
 *
 * Return: int, remainder from the division of a and b
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
