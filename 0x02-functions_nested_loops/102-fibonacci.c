#include <stdio.h>

/**
 * main - prints numbers
 *
 * Return: Always 0
 */
int main(void)
{
	int i, first = 1, second = 2, next;

	for (i = 1; i <= 50; i++)
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
		if (i != 50)
			printf(", ");
	}

	return (0);
}
