#include "main.h"
/**
 * _strchr - Function
 * @s: Parameter
 * @c: Parameter
 * Return: Void
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (s + i);
	}
	return ('\0');
}
