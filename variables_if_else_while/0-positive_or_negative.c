#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - print the value of n
 * Return: always 0
 * betty style doc for function main goes there
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	printf("Es positivo %d\n", n);
	else
	printf("Es negativo %d\n", n);
	/* your code goes there */
	return (0);
}
