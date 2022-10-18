#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - prints numbers
 * Return: always 0
 */

int main(void)
{
	char i;
	char k;

	for (i = '0'; i <= '9'; i++)
		putchar(i);
	for (k = 'a'; k <= 'f'; k++)
		putchar(k);
	putchar('\n');
	return (0);
}
