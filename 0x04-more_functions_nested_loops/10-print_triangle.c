#include "main.h"

/**
 * print_triangle - function that prints a triangle.
 * @size: the int for the paramaters of my function
 * Return: 0
 */
void print_triangle(int size)
{
	int a = 0;
	int b = 0;

	if (size > 0)
	{
		while (a < size)
		{
			while (b < size)
			{
				_putchar('#');
				_putchar('\n');
				b++;
			}
			b = 0;
			a++;
			_putchar('\n');
		}

	}
	else
		_putchar('\n');
}
