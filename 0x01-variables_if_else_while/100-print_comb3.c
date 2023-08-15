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
	int no2;

	while (no < 10)
	{
		for (no2 = no + 1; no2 < 10; no2++)
		{
		putchar(no + '0');
		putchar(no2 + '0');
		if (no != 8 || no2 != 9)
		{
		putchar(',');
		putchar(' ');
		}
		}
		no++;
	}
	putchar('\n');
	return (0);
}
