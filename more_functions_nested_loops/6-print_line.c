#include "main.h"
#include <stdio.h>
/**
 * print_line - print a line
 * return: in 0
 * @n: value
 */
void print_line(int n)
{
int i;
	if (n <= 0)
	{
		putchar('\n');
	}
	else
	{
		for (i = 1; i <= n; i++)
		{
			putchar(95);
		}
		putchar('\n');
	}
}
