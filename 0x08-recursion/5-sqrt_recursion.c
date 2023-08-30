#include "main.h"
/**
 *_sqrt_recursion - for get the square root of n int
 *description: this function for get the power of base x to power y
 *@n: the value of numbe
 *Return: int
 */
int _sqrt_recursion(int n)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
