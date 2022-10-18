#include "main.h"

/**
 * _islower - prints lowercase
 *
 * Return: 1 f int c i lowercase or 0 otherwise
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
