#include "main.h"
#include "stdio.h"
#include "stdlib.h"
#include "time.h"
/**
 * main - Entry point. randomizes numbers
 *
 * Return: 0 (success)
 */

int main(void)
{
	int i, j, n;
	int pass[100];

	j = 0;

	srand(time(NULL));

	for (i = 0; i < 100; i++)
	{
		*pass = rand() % 78;
		j += (pass[i] + '0');
		putchar(pass[i] + '0');
		if ((2772 - j) - '0' < 78)
		{
			n = 2772 - j - '0';
			j += n;
			putchar(n + '0');
			break;
		}
	}
	return (0);
}
