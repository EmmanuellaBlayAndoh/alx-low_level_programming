#include "main.h"

/**
 * print_last_digit - prints last digit of a number
 * @a: numbers last digit
 * Returns: value of last digit
 */
int print_last_digit(int a)
{
		int b;

		b = (a % 10);

		if (b < 0)
		{

			b = (-1 * b);
		}

		_putchar(b + '0');
		return (b);
}
