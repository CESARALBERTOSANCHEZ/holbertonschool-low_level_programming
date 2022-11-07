#include "main.h"
#include <stdio.h>
/**
 ** print_numbers - printf numbers 0 the 9
 ** Return: in 0
 **/
void print_most_numbers(void)
{
int i;
	for (i = 48; i < 58; i++)
	{
	if(i != 50 && i != 52)
	{
		printf("%c", i);
	}
	}
		putchar('\n');    
}
