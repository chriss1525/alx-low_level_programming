#include <stdio.h>
#include "main.h"

/**
 * fizzbuzz - prints numbers to 100
 * if number is divisible by 3 print Fizz
 * if number if divisible by 5 print Buzz
 * if number is divisible by both 3 and 5 print FizzBuzz
 *
 * Return: nothing
 */

void fizzbuzz(void)
{
	int c = 1; 

	for (c = 1; c <= 100; c++)
	{
		if (c % 15 == 0)
		{
			printf("FizzBuzz");
		}
		else if (c % 5 == 0)
		{
			printf("Buzz");
		}
		else if (c % 3 == 0)
		{
			printf("Fizz");
		}

		printf("%d\n", c);
	}
	
	/*while(c <= 100)
	{
		printf("%d", c);
		if (c % 3 == 0)
		{
			printf("Fizz");
		}
		elif ( c % 5 == 0)
		{
			printf("Buzz");
		}
		c++;
	}*/
}

int main(void)
{
	fizzbuzz();
}