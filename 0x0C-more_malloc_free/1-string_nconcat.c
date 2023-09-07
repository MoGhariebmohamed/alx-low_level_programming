#include <stdlib.h>
#include "main.h"
/**
 *string_nconcat - for concatenating 2 string
 *description: this function for concatenating 2 strin
 *@s1: the first string
 *@s2: the second stringi
 *@n: the number of string 2
 *Return: 98 if b is 0 or fail else the pointer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int x1;
	int x2;
	int y1;
	unsigned int y2;
	char *str;

	if (s1 == NULL)
		return ("");
	if (s2 == NULL)
		return ("");
	for (x1 = 0; s1[x1] != '\0'; x1++)
		;
	for (x2 = 0; s2[x2] != '\0'; x2++)
		;
	str = malloc(sizeof(char) * (x1 + n + 1));
	if (str == 0)
	{
		return (NULL);
	}
	else
	{
		for (y1 = 0;  s1[y1] != '\0'; y1++)
		{
			str[y1] = s1[y1];
		}
		for (y2 = 0; y2 < n; y2++)
		{
			str[y1] = s2[y2];
			y1++;
		}
		str[y1] = '\0';
	}

		return (str);
}
