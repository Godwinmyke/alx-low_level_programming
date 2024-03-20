#include "main.h"
/**
 * cap_string - Function
 * @a: Parameter
 * Return: Void
 * @str: Parameter
 */
char *cap_string(char *str)
{
	char a[] = {44, 59, 46, ' ', '!', '?', '"', '(', ')', '{', '}', '\n', '\t'};
	int i, j;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (i == 0 && str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
		}
	for (j = 0; a[j] != '\0'; j++)
	{
		if (a[j] == str[i] && (str[i + 1] >= 'a' && str[i + 1] <= 'z'))
		{
			str[i + 1] = str[i + 1] - 32;
		}
	}
	}
	return (str);
}
