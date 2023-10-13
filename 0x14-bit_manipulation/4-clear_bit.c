#include "main.h"
/**
 *clear_bit - for return value of a bit at a given index
 *description: this function for value of a bit at a given index
 *@n: the binary  pointer
 *@index: the index, starting from 0 of the bit you want to get
 *Return: value of the bit at index index or -1 if an error occured
 */
int clear_bit(unsigned long int *n, unsigned int index)
{

	if (index >= ((sizeof(n) - 1) * 8))
		return (-1);

	*n &= ~(1 << index);

	return (1);

}
