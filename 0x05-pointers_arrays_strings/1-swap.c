#include "main.h"
/**
 *swap_int - for reset value swap
 *description: this function for charachter check
 *@a: the int pointer for a
 *@b: the pointer for b
 *Return: void
 */

void swap_int(int *a, int *b)
{
	int x;

	x = *a;
	*a = *b;
	*b = x;
}
