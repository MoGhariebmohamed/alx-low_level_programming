#include "main.h"
#include <stdio.h>
/**
 *print_diagsums - for print sum of diagnol  matrix
 *description: this function for print sum of 2 diagonal of matrix
 *@a: the array
 *@size: the size of the matrix
 *Return: void
 */
void print_diagsums(int *a, int size)
{
	int x;
	int dleft = 0;
	int dright = 0;

	for (x = 0; x < size; x++)
	{
		dleft = a[x] + dleft;
		dright = dright + a[size - 1 - x];
		a = size + a;
	}
	printf("%d, %d\n", dleft, dright);
}

