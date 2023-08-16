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
while (n <= 9)
{
	i = 0;
	while (i <= 9)
	{
		_putchar(i + '0');
		_putchar(',');
		_putchar(' ');
		i++;
	}
	_putchar('\n');:x
	n++;
}
}
