#include "main.h"

/**
 *  * _isdigit - function that checks for a digit..
 *   * @c: the int for the paramaters of my function
 * Return: 1 if c is digit or 0 otherwise
*/
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
