#include <stdlib.h>
#include "main.h"
/**
 *alloc_grid - for creat an array of int
 *description: this function for creat an array of integers
 *@width: wisth of arra
 *@height: array height
 *Return: NULL or pointer to array
 */
int **alloc_grid(int width, int height)
{
	int **arr;
	int x;
	int y;

	arr = malloc(sizeof(*arr) * height);

	if (width <= 0 || height <= 0 || arr == 0)
	{
		return (NULL);
	}
	else
	{
		for (x = 0; x < height; x++)
		{
			arr[x] = malloc(sizeof(**arr) * width);
			if (arr[x] == 0)
			{
				while (x--)
					free(arr[x]);
				free(arr);
				return (NULL);
			}
			for (y = 0; y < width; y++)
				arr[x][y] = 0;
		}
	}
	return (arr);
}
