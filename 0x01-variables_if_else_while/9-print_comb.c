#include <stdio.h>
/**
 *main - the main function here
 *
 *description: the printing for charachter alpha
 *Return: 0 sucess
 */
int main(void)
{
	int no = 0;

	while (no < 10)
	{
		putchar(no + '0');
		no++;
		if (no <= 9)
		putchar(',');
		putchar(' ');
	}
	return (0);
}
