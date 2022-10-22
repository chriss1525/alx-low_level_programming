#include <stdio.h>
/**
 *print_to_98 - prints to 98
 *
 *@n: int
 *
 *Return: void
 */
void print_to_98(int n)
{
	int i = 98;

	if (i > n)
	{
		while (i - n >= 0)
		{
			if (n != 98)
			{
				printf("%d, ", n);
			}
			else
			{
				printf("%d", n);
			}
			n++;
		}
	}
	else
	{
		while (i - n <= 0)
		{
			if (n != 98)
			{
				printf("%d, ", n);
			}
			else
			{
				printf("%d", n);
			}
			n--;
		}
	}
	printf("\n");
}
