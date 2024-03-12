#include "main.h"
/**
 * _strncat - Function
 * @dest: Parameter
 * @src: Parameter
 * @n: Parameter
 * Return: Void
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int d = 0;

	for (i = 0; dest[i] != '\0'; i++)
		d++;
	for (i = 0; i < n && *src != '\0'; i++)
	{
		dest[d + i] = *src;
		src++;
	}
	dest[d + i] = '\0';
	return (dest);
}
