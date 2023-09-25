#include<stdio.h>
void before_exe(void) __attribute__((constructor));
/**
 *befor_exe - the function to be done befor compiling
 *description: this function to print string befor main
 *Return: nothing
 */
void befor_exe(void)
{
	printf("You're beat! and yet, you must allow,\n"
			"I bore my house upon my back!\n");
}
