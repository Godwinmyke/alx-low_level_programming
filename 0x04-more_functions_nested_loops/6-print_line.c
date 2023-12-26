#include "main.h"
/**
 * print_line - This Is the print_line function
 * Return: Always 0
 * @n: Paremeter
 */
void print_line(int n)
{
	int i;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (i = 1; i <= n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
	}
}
