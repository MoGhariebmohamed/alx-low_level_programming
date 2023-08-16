#include "main.h"

/**
 *_abs - the main function to print lowercase alphapet
 *@n: the return is integr value
 *description: this function to print putchar
 *Return: 0 sucess
 */
int _abs(int n)
{
if (n >= 0)
{
	return (n);
}
else
{
	n = (n * -1);
	return (n);
}
}
