#include "main.h"
#include <stdio.h>
/**
 * print_times_table - this is the print_times_table function
 * @n: Paremeter
 * Return: Always 0
 */
void print_times_table(int n)
{
	int i, j, res;

	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			res = i * j;
			if (n > 15 || n < 0)
			{
			}
			else if (j == 0)
			{
			printf("%d, ", res);
			}
			else if (j != n)
			{
			printf("%3d, ", res);
			}
			else if (j == n)
			{
				printf("%3d", res);
			}
	}
		printf("\n");
}
}
