#include "main.h"
/**
 * divisors - entry point. determiner
 *
 * @n: int
 * @m: int
 * Return: 1 if true and 0 if false
 */
int divisors(int n, int m)
{
	if (m % n == 0)
		return (0);
	else if (m / 2 > n)
		return (divisors(n + 2, m));
	else
		return (1);
}

/**
 * is_prime_number - entry point. checks if number is a prime number
 * @n: int
 * Return: 0 True or 1 False
 */
int is_prime_number(int n)
{
	if ((!(n % 2) && n != 2) || n < 2)
		return (0);
	else
		return (divisors(3, n));
}
