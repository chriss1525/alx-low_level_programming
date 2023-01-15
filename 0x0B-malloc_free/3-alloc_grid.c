#include "main.h"
/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width: first dimension
 * @height: second dimension
 * Return: pointer to new array (success NULL (fail))
 */

int **alloc_grid(int width, int height)
{
	int **str;
	int i;
	int j;

	if (width == 0 || height == 0)
		return (NULL);
	str = (int **)malloc(sizeof(int *) * height);
	if (str != NULL)
	{
		for (i = 0; i < height; i++)
		{
			str[i] = (int *)malloc(sizeof(int) * width);
			if (str[i] != NULL)
			{
				for (j = 0; j < width; j++)
					str[i][j] = 0;
			}
			else
			{
				while (i >= 0)
				{
					free(str[i]);
					i--;
				}
				free(str);
				return (NULL);
			}
		}
		return (str);
	}
	else
	{
		return (NULL);
	}
}
