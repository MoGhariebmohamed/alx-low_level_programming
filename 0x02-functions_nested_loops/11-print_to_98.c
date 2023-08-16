#include "main.h"

/**
 *print_to_98 - the main function to print time table
 *@n: for natural number
 *description: this function to print putchar
 *Return: 0 sucess
 */
void print_to_98(int n)
{
	n = n;
while (n <= 98)
{
	if (n <= 9 && n >= 0)
	{
		_putchar(n + '0');
		_putchar(',');
		_putchar(' ');
	}
	else if (n < 98 ||  n < 0)
	{
		_putchar((n / 10) + '0');
		_putchar((n % 10) + '0');
		_putchar(',');
		_putchar(' ');
	}
	else if (n == 98)
	{
		_putchar((n / 10) + '0');
		_putchar((n % 10) + '0');
	}
	n++;
}
	_putchar('\n');
}
