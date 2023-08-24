#include "main.h"
/**
 *print_array - for print elements of followed by new line
 *description: this function for print half string new line
 *@a: the int  pointer for an array location
 *@n: the int for elements of array
 *Return: void
 */

void print_array(int *a, int n)
{
	int x;

	for (x = 0; x <  n; x++)
	{
		if (x != n - 1)
		{
			printf("%d, ", a[x]);
		}
		else
			printf("%d\n", a[x]);
	}
}
