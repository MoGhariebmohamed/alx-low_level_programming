#include "main.h"

/**
 *jack_bauer - the main function to print absalute
 *n: the return is integr value
 *description: this function to print absalute value
 *Return: 0 for absalute value
 */
void jack_bauer(void)
{
	int no = 0;
	int no2;

	while (no < 24)
	{
		no2 = 0;
		while (no2 < 60)
		{
			_putchar(no / 10 + '0');
			_putchar(no % 10 + '0');
			_putchar(':');
			_putchar(no2 / 10 + '0');
			_putchar(no2 % 10 + '0');
			_putchar('\n');
			no2++;
		}
		no++;
	}
}
