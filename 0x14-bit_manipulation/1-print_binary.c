#include "main.h"
/**
 *print_binary - for prints the binary representation of a number
 *description: this function for prints the binary representation of a number
 *@n: the binary  pointer
 *Return: number unsigned or 0
 */
void print_binary(unsigned long int n)
{
	unsigned int x;

	if (*b == '\0')
		return (0);

	for (x = 0; *b != '\0'; )
	{
		if (*b != '0' && *b != '1')
			return (0);

		x = x * 2 + (*b++ - 48);
	}
	return (x);
}
