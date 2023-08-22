#include "main.h"
/**
 *print_rev - for print rev string followed by new line
 *description: this function for print string by new line
 *@s: the char  pointer for a string location
 *Return: void
 */

void print_rev(char *s)
{
	int x;

	for (x = 0; s[x] != '\0'; x++)
	{
	}
		for (x = x - 1; x >= 0; x--)
		{
			_putchar(s[x]);
		}
	_putchar('\n');
}
