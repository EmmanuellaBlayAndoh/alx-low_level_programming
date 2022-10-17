#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - prints numbers
 * Return: Always 0
 */

int main(void)
{
	char i;

	for (i = 'z'; i <= 'a'; i--)
		putchar(i);
	putchar('\n');
	return (0);
}
