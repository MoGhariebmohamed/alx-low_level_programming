#include "main.h"
/**
 *puts_half - for put half of string followed by new line
 *description: this function for print half string new line
 *@str: the char  pointer for a string location
 *Return: void
 */

void puts_half(char *str)
{
	int x;

	for (x = 0; str[x] != '\0'; x++)
		;
		for (x = x / 2; str[x] != '\0'; x++)
		{
			_putchar(str[x]);
		}
		_putchar('\n');
}
