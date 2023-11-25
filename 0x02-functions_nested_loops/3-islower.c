#include "main.h"
/**
 *_islower - This is the _islower function
 * @c: peremeter to be check
 * Return: Always 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
		return (0);
}
