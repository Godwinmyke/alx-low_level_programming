#include "main.h"
/**
 * print_last_digit - This is the print_last_digit function
 * @a: paremeter
 * Return: Always 0
 */
int print_last_digit(int a)
{
	int i;

	i = a % 10;
	if (i < 0)
	{
		i = -i;
	}
	_putchar(i + '0');
	return (i);
}
