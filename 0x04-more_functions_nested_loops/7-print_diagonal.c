#include "main.h"
/**
 *print_diagonal - for printing diagonal
 *@n: for nomber
 *description: this function for printing series of slahes as a diagonal
 *Return: void
 */
void print_diagonal(int n)
{
	int x;
	int z;

if (n > 0)
{
	for (z = 1; z <= n; z++)
	{
		for (x = 1; x <= z; x++)
			_putchar(' ');
		_putchar('\\');
		if (z == n - 1)
			continue;
		_putchar('\n');
	}
}
_putchar('\n');
}

