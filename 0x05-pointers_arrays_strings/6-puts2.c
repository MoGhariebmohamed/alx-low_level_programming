#include "main.h"
/**
 *puts2 - for rev string followed by new line
 *description: this function for reverse string by new line
 *@str: the char  pointer for a string location
 *Return: void
 */

void puts2(char *str)
{
	int x;

	for (x = 0; str[x] != '\0'; x++)
	{
		if (x % 2 == 0)
		{
		_putchar(str[x]);
		}
	}
	_putchar('\n');
}
