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

	for (i = 'a'; i <= 'z'; i--)
		putchar(i);
	putchar('\n');
	return (0);
}
