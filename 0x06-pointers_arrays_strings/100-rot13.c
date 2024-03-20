#include "main.h"
/**
 * rot13 - Function
 * @str: Parameter
 * Return: Void
 */
char *rot13(char *str)
{
	int i, j;
	char ch[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char a[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; ch[j] != '\0'; j++)
		{
			if (str[i] == ch[j])
			{
				str[i] = a[j];
				break;
			}
		}
	}
	return (str);
}
