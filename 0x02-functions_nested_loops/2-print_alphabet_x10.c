#include "main.h"
/**
 * print_alphabet_x10 - This is the print_alphabet_x10 function
 * Return: Always 0
 */
void print_alphabet_x10(void)
{
	char ch;
	int a;

	for (a = 1; a <= 10; a++)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
		{
			_putchar(ch);
		}
		_putchar('\n');
	}
}
