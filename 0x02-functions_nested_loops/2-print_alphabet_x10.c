#include "main.h"

/**
 * print_alphabet_x10 - prints alphabets x10
 *
 * Return: Always 0
 */
void print_alphabet_x10(void)
{
	int i, k;

	while (k < 10)
	{
		for (i = 'a'; i <= 'z'; i++)
		{
			_putchar(i);
		}
		k++;
		_putchar('\n');
	}
}
