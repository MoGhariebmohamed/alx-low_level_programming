#include "main.h"
/**
 *print_number - for printing series no
 *@n: no to be printed
 *description: this function for print nomber
 *Return: void
 */
void print_number(int n)
{
	unsigned int x = n;

	if (n < 0)
	{
		_putchar('-');
		x = -x;
	}
	if ((x / 10) > 0)
		print_number(x / 10);
	_putchar((x % 10) + '0');
}
