#include "main.h"
/**
 *print_square - for printing  line
 *@size: for size of squre
 *description: this function for printing squre of #
 *Return: void
 */
void print_square(int size)
{
	int x;
	int z;

	if (size > 0)
{
	for (x = 1; x <= size; x++)
	{
		for (z = 1; z <= size; z++)
		{
		_putchar('#');
		}
		_putchar('\n');
	}
}
else
{
	_putchar('\n');
}
}
