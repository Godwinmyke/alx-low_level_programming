#include "main.h"
/**
 * _memset - Function
 * @s: Parameter
 * @b: Parameter
 * @n: Parameter
 * Return: void
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
