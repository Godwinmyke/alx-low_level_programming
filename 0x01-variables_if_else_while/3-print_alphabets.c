#include <stdio.h>
/**
 * main - this is the main function
 * Return: Always 0
 */
int main(void)
{
	char ch, a;

	for (ch = 'a' ; ch <= 'z' ; ch++)
	{
	putchar(ch);
	}
	for (a = 'A' ; a <= 'Z' ; a++)
	{
	putchar(a);
	}
	putchar('\n');
	return (0);
}
