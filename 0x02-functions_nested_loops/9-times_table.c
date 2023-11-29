#include "main.h"
#include <stdio.h>
/**
 * times_table -  this is the times_table function
 * Return: Always 0
 */
void times_table(void)
{
	int i, j, res;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			res = i * j;
			if (j == 0)
				printf("%d, ", res);
			else
			{
				printf("%2d", res);
				if (j != 9)
					printf(", ");
			}
		}
		printf("\n");
	}
}

