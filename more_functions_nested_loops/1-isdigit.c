#include <stdio.h>
/**
 * _isdigit - check the caracter c
 * @c: value
 * Return: in 1 or 0
 */
int _isdigit(int c)
{
	if (c <= '9')
	return (1);
	return (0);
}
/**
 * main - check the code
 *
 * Return: Always 0
 */
int main(void)
{
char c;
	for (c = '0'; c <= '9'; c++)
	printf("%c: %d\n", c, _isdigit(c));
	c = 'a';
	printf("%c: %d\n", c, _isdigit(c));
	return (0);
}
