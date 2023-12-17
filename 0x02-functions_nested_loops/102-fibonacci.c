#include <stdio.h>
/**
 * main - This is the main function
 * Return: Always 0
 */
int main(void)
{
	unsigned long int t1 = 1;
	unsigned long int t2 = 2;
	unsigned long int nxt;
	unsigned long int i;

	printf("%lu, ", t1);
	for (i = 1; i < 50; i++)
	{
		printf("%lu", t2);
		nxt = t1 + t2;
		t1 = t2;
		t2 = nxt;
		if (i != 49)
			printf(", ");
	}
	printf("\n");
	return (0);
}
