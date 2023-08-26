#include "main.h"
/**
 *_strcpy - for copy  elements of array
 *description: this function for copy elemnts of src array 
 *@src: the char  pointer for an array
 *@dest: the char for new elements of array
 *Return: dest success
 */

char *_strcpy(char *dest, char *src)
{
	int x;

	for (x = 0;*(src + x) != '\0'; x++)
	{
		*(dest + x) = *(src + x);
	}
	*(dest + x) = '\0';
	return (dest);
}
