#include "main.h"
/**
 * factorial - Function
 * @n: parameter
 * Return: Void
 */
int factorial(int n)
{
	if (n == 0)
	return (1);
	if (n < 0)
		return (-1);
	else
	return (n * factorial(n - 1));
}
