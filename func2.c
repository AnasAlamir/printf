#include "main.h"
/**
 * print_x - hexadecimal format (lowercase).
 *
 * @a: hexadecimal
 * @i: count
 *
 * Return: Always 1 (success).
 */
int print_x(int a, int *i)
{
	printf("%x", a);
	(*i)++;
	return (1);
}
/**
 * print_X - hexadecimal format (uppercase).
 *
 * @a: hexadecimal
 * @i: count
 *
 * Return: Always 1 (success).
 */
int print_X(int a, int *i)
{
	printf("%X", a);
	(*i)++;
	return (1);
}
/**
 * print_b - binary
 *
 * @a: binary
 * @i: count
 *
 * Return: Always 1 (success).
 */
int print_b(int a, int *i)
{
	int j, b[32],c = 0;

	for (j = 0; a; j++)
	{
		b[c++] = a % 2;
		a /= 2;
	}
	for (j = c - 1; j >= 0; j--)
		printf ("%d", b[j]);
	(*i)++;
	return (1);
}
