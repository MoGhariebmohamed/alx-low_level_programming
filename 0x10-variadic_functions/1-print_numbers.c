#include "variadic_functions.h"
#include <stdarg.h>
/**
 *print_numbers - prints numbers
 *description:  function that prints numbers, followed by a new line
 *@separator: the string to be printed between numbers
 *@n: number of integers passed to the function
 *Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list all;
	unsigned int x;

	if (n == 0)
		return;
	va_start(all, n);
	for (x = 0; x < n; x++)
	{
		printf("%d", va_arg(all, int));
		if (x < (n - 1) && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(all);
}
