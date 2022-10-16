#include <stdio.h>
#include <ctype.h>
/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
	int c;
	int x;
	int d;

	x = '1';
	c = 'A';
	d = '0';
	(isupper(c));
	putchar (c);
	putchar (58);
	putchar (x);
	putchar('\n');
	c = 'a';
	(isupper(c));
	putchar (c);
	putchar (58);
	putchar (d);
	putchar('\n');

	return (0);
}
