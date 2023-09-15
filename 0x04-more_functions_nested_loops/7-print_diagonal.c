#include "main.h"
/**
 * print_diagonal - printing lines diagnol
 * @n: input variable
 * Return: void
 */
void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
		_putchar('\n');
	for (1 = 0; i < n; i++)
	{
		for (j = 0; j < i; j++)
		{
			_putchar('');
		}
		_putchar('\\');
		_putchar('\n');
	}
}
