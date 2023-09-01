#include "main.h"

/**
 *_abs - the main function to print absalute
 *@n: the return is integr value
 *description: this function to print absalute value
 *Return: n for absalute value
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
