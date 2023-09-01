#include "main.h"
/**
 *_isdigit - for check digits
 *description: this function for digits check
 *@c: the digit for check
 *Return: 1 if true and 0 if not
 */
int _isdigit(int c)
{

	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
