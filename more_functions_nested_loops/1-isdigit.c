#include <stdio.h>
#include "main.h"
/**
 * _isdigit - check the caracter c
 * @c: value
 * Return: in 1 or 0
 */
int _isdigit(int c)
{
	if (c <= 57 && c >= 48)
		return (1);
	return (0);
}
