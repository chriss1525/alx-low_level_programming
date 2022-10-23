#include <stdio.h>
/**
 * main - prints the sum of all multiples of 3 or 5
 *
 * Return: 0 (success)
 */
int main(void)
{
	int n;
    int i = 0;
	
	while (n < 1024)
	{
    	if (n % 3 == 0)
        {
        i += n;
        }
        else if (n % 5 == 0)
        {
        i += n;
        }
        n++;
	}
    printf("%d\n", i);
    return (0);
}
