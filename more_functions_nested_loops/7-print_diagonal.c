#include <stdio.h>
#include "main.h"
/**
 * more_numbers - printf numbers 0 the 9
 *
 * Return: in 0
 *
 */
void print_diagonal(int n)
{
int espacio, diagonal;
	diagonal = 0;
	while (diagonal < n)
	{
		espacio = 0;
		while (espacio < diagonal)
		{
		putchar(32);
		espacio++;
		}
		putchar(92);
		putchar(10);
		diagonal++;
	}
}
