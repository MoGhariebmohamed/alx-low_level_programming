#include "main.h"
/**
 *print_binary - for prints the binary representation of a number
 *description: this function for prints the binary representation of a number
 *@n: the binary  pointer
 *Return: nothing
 */
void print_binary(unsigned long int n)
{

	if (n  == '\0')
		return;
	if (n == 0)
	{
		_putchar('0');
	}
	else if (n > 0)
	{
		print_binary(n >> 1);
		if ((n & 1) == 1)
		{
			_putchar('1');
		}
		else
		{
			_putchar('0');
		}
	}
}
