#include <stdio.h>
/**
 * _sqrt - Function
 * @n: Parameter
 * @i: Parameter
 * Return: Void
 */

int _sqrt(int n, int i)
{
	int x;

	x = i * i;
	if (x == n)
		return (i);
	if (i > n)
		return (-1);
	return (_sqrt(n, i + 1));
}
/**
 * _sqrt_recursion - Function
 * @n: Parameter
 * Return: Void
 */
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}
