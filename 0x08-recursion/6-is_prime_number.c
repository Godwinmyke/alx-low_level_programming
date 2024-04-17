#include <stdio.h>
#include "main.h"
/**
 * _prime - Function
 * @n: Parameter
 * @j: Parameter
 * Return: Void
 */
int _prime(int n, int j)
{
	int s1;

	s1 = j * j;
	if (s1 == n || n <= 0)
		return (0);
	if (s1 > n)
		return (1);
	return (_prime(n, j + 1));
}
/**
 * is_prime_number - Function
 * @n: Parameter
 * Return: Void
 */
int is_prime_number(int n)
{
	return (_prime(n, 1));
}
