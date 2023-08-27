#include "main.h"
/**
 *_atoi - for copy  elements of array
 *description: this function for copy elemnts of src array
 *@s: the char  pointer for an array
 *Return: int  success
 */

int _atoi(char *s)
{
	int x = 1;
	unsigned int y = 0;

	do {
		if (*s == '-')
		{
			x = x * (-1);
		}
		else if (*s >= '0' && *s <= '9')
		{
			y = (*s * 10) + (*s - 48);
		}
		else if (y > 0)    /*as an ascii point not 0 */
			break;
	} while (*s++);

	return (x * y);
}
