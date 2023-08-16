#include "main.h"

/**
 *print_last_digit- the main function to print last digit
 *@n: the return is integr value
 *description: this function to print last three digits of the value
 *Return: the last  digit
 */
int print_last_digit(int n)

{
	int x;

	x = (n % 10);
	if (x < 0)
	{
		x = (n * -1);
		_putchar(x + '0');
	}
	return (x);
}
