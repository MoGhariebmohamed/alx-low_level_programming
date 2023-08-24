#include "main.h"
/**
 *rev_string - for rev string followed by new line
 *description: this function for reverse string by new line
 *@s: the char  pointer for a string location
 *Return: void
 */

void rev_string(char *s)
{
	int x;
	int i;
	char r;

	for (x = 0; s[x] != '\0'; x++) /*to get th no of string itms */
		;
		for (i = 0; i < x / 2; i++)
		{
			r = s[i];
			s[i] = s[x - i - 1];
			s[x - i - 1] = r;

		}
}
