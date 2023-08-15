#include "main.h"

/**
 *print_sign - the main function to print lowercase alphapet
 *@n: is avriable to check
 *description: this function to print putchar
 *Return: 0 sucess
 */
int print_sign(int n)
{
if (n > 0)
{
	_putchar('+');
	return (1);
}
else if (n < 0)
{
	_putchar('-');
	return (-1);
}
else
{
	_putchar('0');
	return (0);
}
}
