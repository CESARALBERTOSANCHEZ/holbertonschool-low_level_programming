#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - print the value of n
 * it is compiled and run on
 * Return: always 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	printf("%d Es positivo\n", n);
	else if (n == 0)
	printf("%d Es zero\n", n);
	else
	printf("%d Es negativo\n", n);
	return (0);
}
