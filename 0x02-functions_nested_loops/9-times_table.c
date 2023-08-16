#include "main.h"

/**
 *times_table - the main function to print time table
 *
 *description: this function to print putchar
 *Return: 0 sucess
 */
void times_table(void)
{
int n = 0;
int i;
int x;
while (n <= 9)
{
	i = 0;
	while (i <= 9)
	{
		x = i * n;

		if (x <= 9)
		{
			_putchar(x + '0');
			_putchar(',');
			_putchar(' ');
			_putchar(' ');
			_putchar(' ');
		}

		else
		{
			_putchar((x / 10) + '0');
			_putchar((x % 10) + '0');
			_putchar(',');
			_putchar(' ');
		}
		i++;
	}
	_putchar('\n');
	n++;
}
}
