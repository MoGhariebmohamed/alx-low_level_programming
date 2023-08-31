#include "main.h"
/**
 *is_prime_number - for get the prime number
 *description: this function for get the prime no
 *@n: the value of number
 *Return: 1 if prime and zero if not
 */
int is_prime_number(int n)
{
	return (prime_number(2, n));
}
/**
 *prime_number - for loop of prime
 *description: for looping on prime check
 *@x: looping step
 *@y: original no
 *Return: int 0 finish or 1
 */
int prime_number(int x, int y)
{

	if (x >= y && y > 1)
	{
		return (1);
	}
	else if (x % y == 0 || y < 0)
	{
		return (0);
	}
	else
	{
		return (prime_number(x + 1, y));
	}
}
