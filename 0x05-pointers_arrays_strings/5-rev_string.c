#include "main.h"
/**
 * rev_string - function
 * @s: parameters
 * Return: Always 0
 */
void rev_string(char *s)
{
	int i, count = 0;
	char j;

	for (i = 0; s[i] != '\0'; i++)
	{
		count++;
	}
	for (i = 0; i < count / 2; i++)
	{
		j = s[i];
		s[i] = s[count - 1 - i];
		s[count - 1 - i] = j;
	}
}
