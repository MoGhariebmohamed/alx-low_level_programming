#include "main.h"

/**
 *main - the main function to print lowercase alphapet
 *
 *description: this function to print putchar
 *Return: 0 sucess
 */
int main(void)

{

		int i = 'a';

		while (i <= 'z')

		{
			_putchar(i);
			i++;
		}
		_putchar('\n');
		return (0);
}
