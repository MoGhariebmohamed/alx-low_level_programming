#include "main.h"
/**
 *print_line - for printing  line
 *@n: for nomber
 *description: this function for printing series of lines
 *Return: void
 */
void print_line(int n)
{
	int x;

	for (x = 1; x <= n; x++)
	{
		_putchar('_');
	}
		_putchar('\n');

}
