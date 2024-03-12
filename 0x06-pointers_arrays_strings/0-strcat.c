#include "main.h"
/**
 * _strcat - Function
 * @dest: Parameters
 * @src: Parameters
 * Return: void
 */
char *_strcat(char *dest, char *src)
{
	int i;
	int s = 0;
	int d = 0;

	for (i = 0; dest[i] != '\0'; i++)
		d++;
	for (i = 0; src[i] != '\0'; i++)
		s++;
	for (i = 0; i <= s; i++)
		dest[d + i] = src[i];
	return (dest);
}

