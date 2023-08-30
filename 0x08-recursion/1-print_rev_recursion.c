#include "main.h"
/**
 *_print_rev_recursion - for print a string in reverse followed by new line
 *description: this function for print a string in reverse followed by new line
 *@s: string pointer
 *Return: void
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
