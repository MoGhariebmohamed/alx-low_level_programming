#include "main.h"
/**
 *print_triangle - for printing triangle
 *@size: for nomber size of the triangle
 *description: this function for printing triangle
 *Return: void
 */
void print_triangle(int size)
{
	int z;
	int x;
	
	for (z = 1; z <= size; z++)
	{
		for (x = 1; x <= size; x++)
		{
			if (x <= (size - z))
				_putchar(' ');
			else if (x > (size - z))
			{
				_putchar('#');
			}
			}
		_putchar('\n');
}
}
