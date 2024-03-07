#include "main.h"
/**
 * swap_int - swap_int function
 * @a: parameter
 * @b: paremeter
 * Return: always 0
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
