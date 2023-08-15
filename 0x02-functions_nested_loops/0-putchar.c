#include "main.h"

/**
 *main - the main function to print putchar
 *
 *description: this function to print putchar
 *Return: 0 sucess
 */
int main(void)

{
	char name[] = "_putchar";

		int i = 0;

		while (i < 8)

		{
			_putchar(name[i]);
			i++;
		}
		_putchar('\n');
		return (0);
}
