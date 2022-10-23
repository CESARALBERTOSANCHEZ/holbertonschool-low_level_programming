#include <stdio.h>
#include "main.h"
/**
 ** _isupper - check the caracter c
 ** @c: value
 ** Return: in 1 or 0
 **/
int _isupper(int c)
{
	if (c <= 90 && c >= 65)
		return (1);
	return (0);
}
