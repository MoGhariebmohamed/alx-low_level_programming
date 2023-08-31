#include "main.h"
/**
 *_sqrt_recursion - for get the square root of n int
 *description: this function for get the power of base x to power y
 *@n: the value of numbe
 *Return: int
 */
int _sqrt_recursion(int n)
{
	return (root(0, n));
}

/**
 *root - for get direct root by recursion on sqrt_recursion
 *descriptiom: this is a second function to recursion
 *@x: this is a loop integer
 *@y: for value
 *Return: teh x value
 */


int root(int x, int y)
{
	if (x * x == y)
	{
		return (x);
	}
	else if (x * x < y)
	{
		return (root(x + 1, y));
	}
	else
	{
		return (-1);
	}
}
