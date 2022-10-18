#include "main.h"

/**
 * main -prints _putchar
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char *func = "_putchar";

	while (*func)
	{
		_putchar(*func);
		func++;
	}
	_putchar('\n');

	return (0);
}
