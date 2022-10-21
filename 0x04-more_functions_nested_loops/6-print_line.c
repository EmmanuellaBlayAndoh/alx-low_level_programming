#include "main.h"

/**
 * print_line - draws a straight line
 * @n: single input
 *
 * Return: Always 0
 */
void print_line(int n)
{
	int i = 0;

	if (i > 0)
	{
		for (i = 1; i < n; i++)
		{
			_putchar('_');
			_putchar('\n');

		}
	}
	else
	{
		_putchar ('\n');
	}
}
