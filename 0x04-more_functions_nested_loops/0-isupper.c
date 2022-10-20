#include "main.h"

/**
 * _isupper - checks for uppercase characters
 *
 * @c: single input
 * Return: 1 if int c is uppercase or otherwise 0
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
