#include "main.h"
/**
 *_isupper - for upper charachter
 *description: this function for charachter check
 *@c: the charachter to be checked
 *Return: 1 if true and 0 if not
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
