#include "main.h"
/**
 *print_chessboard - for print arrays
 *description: this function for print chess master
 *@a: the array
 *Return: void
 */
void print_chessboard(char (*a)[8])
{
	int x;
	int y;

	for (x = 0; a[x][8] != '\0'; x++)
	{
		for (y = 0; y <= 8; y++)
		{
		_putchar(a[x][y]);
		}
		_putchar('\n');
	}
}
