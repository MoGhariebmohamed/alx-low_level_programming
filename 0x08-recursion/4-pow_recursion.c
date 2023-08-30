#include "main.h"
/**
 *_pow_recursion - for get power of int to int
 *description: this function for get the power of base x to power y
 *@x: the value of base value
 *@y: the value of power
 *Return: int
 */
int _pow_recursion(int x, int y)
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
