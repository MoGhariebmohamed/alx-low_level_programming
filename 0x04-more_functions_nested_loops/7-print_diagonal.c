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

	for (x = 1; x <= n; x++)
	{
		_putchar('\\');
	}
		_putchar('\n');

}
