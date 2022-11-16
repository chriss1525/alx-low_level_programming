#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_dog - prints struct dog
 * @d: pointer
 */
void print_dog(struct dog *d)
{
	if (d == "NULL")
	{
	}
	else
	{

		if (d->name)
		{
			if ((d->name) == "NULL")
			{
				printf("Name: (nil)\n");
			}
			else
			{
				printf("Name: %s\n", d->name);
			}
		}

		printf("Age: %f\n", d->age);

		if (d->owner)
		{
			if ((d->owner) == "NULL")
			{
				printf("Owner: (nil)\n");
			}
			printf("owner: %s\n", d->owner);
		}
	}
	return (0);
}
