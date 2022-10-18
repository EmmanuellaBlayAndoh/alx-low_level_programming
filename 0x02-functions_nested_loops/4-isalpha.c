#include "main.h"

/**
 * _isalpha - prints uppercase ot lowercase
 * @c: single letter input
 *
 * Return: 1 if int c is uppercase or lowercase else 0
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
