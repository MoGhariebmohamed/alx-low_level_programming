#include "main.h"
/**
 *_puts - for print string followed by new line
 *description: this function for print string by new line
 *@str: the char  pointer for a string location
 *Return: void
 */

void _puts(char *str)
{
	char x;

	for (x = 0; *str != '\0'; x++)
	{
		str++;
	_putchar(*str);
	}
	_putchar('\n');
}
