#include "main.h"
/**
 *factorial - for factorial of n
 *description: this function for return facttorial of n
 *@n: string pointer
 *Return: int
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
