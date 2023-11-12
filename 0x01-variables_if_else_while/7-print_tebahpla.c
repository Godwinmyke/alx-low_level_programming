#include <stdio.h>
/**
 * main - This is the main function
 * Return: Always 0
 */
int main(void)
{
	char ch;

	for (ch = 'z' ; ch >= 'a' ;  ch--)
	{
	putchar(ch);
	}
	putchar('\n');
	return (0);
}
