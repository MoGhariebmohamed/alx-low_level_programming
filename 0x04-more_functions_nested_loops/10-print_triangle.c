#include "main.h"
/**
 *print_diagonal - for printing diagonal
 *@n: for nomber
 *description: this function for printing series of slahes as a diagonal
 *Return: void
 */
void print_triangle(int size)
{
	int z;
	int x;
if (n > 0)
{
	for (z = 0; z < n; z++)
	{
		for (x = 0; x < z; x++)
			_putchar(' ');
		_putchar('\\');

		if (z == n - 1)
			continue;

		_putchar('\n');
	}
}
_putchar('\n');
}

