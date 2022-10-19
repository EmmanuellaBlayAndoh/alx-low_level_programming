#include <stdio.h>

/**
 * main - prints numbers
 *
 * Return: Always 0
 */
int main(void)
{
	int i, first = 0, second = 1, next;

	for (i = 0; i <= 50; i++)
	{
		if (i <= 1)
			next = i;
		else
		{
			next = first + second;
			first = second;
			second = next;
		}
		printf("%d", next);
	}

	return (0);
}
