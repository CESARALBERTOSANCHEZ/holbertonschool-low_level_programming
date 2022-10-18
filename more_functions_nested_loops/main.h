#include <stdio.h>
/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
char c;
	for (c = 'A';
	c <= 'Z'; c++)
	if (isupper(c))
	printf("%c: 1\n", c);
	else
        return (0);
}
