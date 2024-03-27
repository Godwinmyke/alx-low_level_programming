#include "main.h"
/**
 * _memcpy - Function
 * @dest: Parameter
 * @src: Parameter
 * @n: Parameter
 * Return: Void
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*dest = *src;
	}
	return (dest);
}
