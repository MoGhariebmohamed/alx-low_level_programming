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
		x = (i * n);
		_putchar(x + '0');
		if (i != 9 && n != 9)
		{
		_putchar(',');
		_putchar(' ');
		}
		i++;
	}
	_putchar('\n');
	n++;
}
}
