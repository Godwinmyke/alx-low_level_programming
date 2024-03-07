#include "main.h"
/**
 * _strlen - _strlen function
 * @s: paremeters
 * Return: Always 0
 */
int _strlen(char *s)
{
	int i;
	int j = 0;

	for (i = 0; s[i] != '\0'; i++)
		j++;
	return (j);
}
