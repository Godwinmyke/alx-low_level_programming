#include "main.h"
/**
 * _isdigit -  thisis is the _isdigit function
 * Return: Always 0
 * @c: Paremeter
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
