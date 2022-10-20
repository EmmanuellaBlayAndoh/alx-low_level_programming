#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - printing number
 * Return: Always 0
 */
int positive_or_negative(void)
{

	int i;

	if (i > 0)
		printf("%d is positive\n", i);
	else if (i == 0)
		printf("%d is zero\n", i);
	else
		printf("%d is negative\n", i);

	return (0);
}
