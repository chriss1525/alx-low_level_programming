#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - entry point
 *
 * Return: always 0 (success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX/2;

	if(n > 0)
	{
		printf("is positive\n");
	}

	if(n < 0)
	{
		printf("is negative\n");
	}

	else
	{
		printf("is zero\n");
	}

	return(0);
}
