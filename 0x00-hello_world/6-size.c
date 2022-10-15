#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char a;
int integer;
long int loint;
long long int loloint;
float flo;

printf("Size of a char: %lu byte(s)\n", sizeof(a));
printf("Size of an int: %lu byte(s)\n", sizeof(integer));
printf("Size of a long int: %lu byte(s)\n", sizeof(loint));
printf("Size of a long long int: %lu byte(s)\n", sizeof(loloint));
printf("Size of a float: %lu byte(s)\n", sizeof(flo));
return (0);
}
