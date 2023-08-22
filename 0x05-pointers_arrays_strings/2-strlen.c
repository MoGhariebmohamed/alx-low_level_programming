#include "main.h"
/**
 *_strlen - for reset value swap
 *description: this function for charachter check
 *@s: the int pointer for a string location
 *Return: x success
 */

int _strlen(char *s)
{
	int x;

	for (x = 0; *s != '\0'; x++)
	{
		s++;
	}
		return (x);
}
