#include "main.h"
/**
 *puts2 - for rev string followed by new line
 *description: this function for reverse string by new line
 *@str: the char  pointer for a string location
 *Return: void
 */

void puts2(char *str)
{
	char x;
	char y;

	
	for (x = 0; *str != '\0'; x++)
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
