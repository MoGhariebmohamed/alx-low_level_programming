#include "main.h"

/**
 *_islower - the main function to print lowercase alphapet
 *@c: is avriable to check
 *description: this function to print putchar
 *Return: 0 sucess
 */
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
{
	return (1);
}
else
{
	return (0);
}
}
