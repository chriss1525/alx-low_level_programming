#include <stdio.h>
/**
 * main - prints the sum of all multiples of 3 or 5
 *
 * Return: 0 (success)
 */
int main(void)
{
	int n;
	int sum = 0;

	for (n = 0; n < 1024; n++)
	{
		if (n % 3 == 0 || n % 5 == 0)
		{
			sum += n;
			printf("%d, ", sum);
		}
	}
	printf("\n");
	return (0);
}
