#include "main.h"
/**
 *is_palindrome - for get the palindrom string
 *description: this function for check if string palindrome or not
 *@s: the value of string
 *Return: 1 if palindrom and zero if not
 */
int is_palindrome(char *s)
{
	int last = string_check(s);

	return (find(s, 0, last - 1, last % 2));
}
/**
 *find - for loop of prime
 *description: for looping on prime check
 *@string: string
 *@first: original start of string
 *@last: the end of string
 *@rest: the remaining
 *Return: int 0 finish or 1
 */
int find(char *string, int first, int last, int rest)
{

	if ((first == last && rest != 0) || (first == last + 1 && rest != 0))
	{
		return (1);
	}
	else if (string[first] != string[last])
	{
		return (0);
	}
	else
	{
		return (find(string, first + 1, last - 1, rest));
	}
}
/**
 *string_check - for check no of string
 *description: for check all string array
 *@s: string
 *Return: int y the no of string
 */
int string_check(char *s)
{
	int y = 0;

	if (*s >= '\0')
	{
		y = y + string_check(s + 1) +1;
	}
	return (y);
}
