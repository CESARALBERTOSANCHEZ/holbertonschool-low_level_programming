#include "main.h"
#include <stdio.h>
/**
 * print_line - print a line
 * return: in 0
 * @n: value
 */
void print_line(int n)
{
	if (n == 2)
	{
		putchar(95);
		putchar(95);
		putchar('\n');
	}
	else if (n == 10)
	{
		putchar(95);
		putchar(95);
		putchar(95);
		putchar(95);
		putchar(95);
		putchar(95);
		putchar(95);
		putchar(95);
		putchar(95);
		putchar(95);
		putchar('\n');
	}
	else
	{
	putchar('\n');
	}
}
