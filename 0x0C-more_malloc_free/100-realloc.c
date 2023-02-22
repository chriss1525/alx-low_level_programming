#include "main.h"

/**
 * _realloc - reallocates a memory block using malloc and free
 *
 * @ptr: pointer to memory previously allocated
 * @old_size: size, in bytes, allocated to ptr
 * @new_size: size, in bytes, for the new memory block
 *
 * Return: void pointer to newly allocated memory block
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i;
	char *p;

	if (new_size == old_size)
		return (ptr);

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	/* allocate memory to p */
	p = malloc(new_size);

	if (p == NULL)
		return (NULL);

	/* copy contents of ptr to p if ptr is not null */
	if (ptr != NULL)
	{
		for (i = 0; i < old_size; i++)
			*((char *)(ptr) + i) = *(p + i);
	}

	free(ptr);

	return (p);
}
