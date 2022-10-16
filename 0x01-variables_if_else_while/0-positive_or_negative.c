#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/*more headers go here*/

/*betty style doc for function main*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX/2;

	if(n>0)
	{
		printf("is positive\n");
	}

	if(n=0)
	{
		printf("is zero\n");
	}

	else
	{
		printf("is negative\n");
	}

	return(0);
}
