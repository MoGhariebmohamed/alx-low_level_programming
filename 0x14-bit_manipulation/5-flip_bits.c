#include "main.h"
/**
 *flip_bits - for return returns the number of bits
 *description: this function for returns the number of bits
 *@n: the binary  pointer
 *@m: the index, starting from 0 of the bit you want to get
 *Return: value of the bit at index index or -1 if an error occured
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int x, index = 0;

	for (x = ((sizeof(n) - 1) * 8); x >= 0; x--)
	{
		if (((n ^ m) >> x) & 1)
		{
		index++;
		}
	}
	return (index);

}
