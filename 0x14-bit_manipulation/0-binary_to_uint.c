#include "main.h"
/**
 *binary_to_uint - for change binary to unsigned int
 *description: this function for that converts a binary number to unsigned int
 *@b: the binary  pointer
 *Return: number unsigned or 0
 */
unsigned int binary_to_uint(const char *b)
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
