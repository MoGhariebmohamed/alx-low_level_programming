#include "main.h"
/**
 *more_numbers - for printing  no
 *description: this function for printing series of numbers
 *Return: void
 */
void more_numbers(void)
{
	int x;
	int z;

	for (x = 0; x < 10; x++)
	{
		for (z = 0; z <= 14; z++)
		{
		_putchar(z / 10 + '0');
		_putchar(z % 10 + '0');
		}
		_putchar('\n');
	}
}
