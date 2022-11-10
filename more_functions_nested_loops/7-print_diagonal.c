#include <stdio.h>
#include "main.h"
/**
 * print_diagonal - printf diagonales
 *
 * Return: in 0
 *@n: variable
 */
void print_diagonal(int n)
{
int espacio, diagonal;
	if (n <= 0)
		putchar(10);
	for (diagonal = 0; diagonal < n; diagonal++)
	{
		for (espacio = 0; espacio < diagonal; espacio++)
		{
			putchar(32);
		}
		putchar(92);
		putchar(10);
	}
}
