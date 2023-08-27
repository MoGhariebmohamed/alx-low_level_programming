#include "main.h"
/**
 *reverse_array - for cpy the string
 *description: this function for conactes two strings
 *@a: the int pointer for array
 *@n: the number of elementa in array
 *Return: void  sucess
 */
void reverse_array(int *a, int n)
{
	int x;
	int y;

	x = n - 1;
	while (x > n / 2)
	{
		y = a[n - 1 - x];
		a[n - 1 - x] = a[x];
		a[x] = y;
		x--;
	}
}
