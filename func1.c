#include "main.h"
/**
 * print_c - character.
 *
 * @a: The character to print.
 * @i: count
 *
 * Return: Always 1 (success).
 */
int print_c(char a, int *i)
{
	printf("%c", a);
	(*i)++;
	return (1);
}
/**
 * print_s - string.
 *
 * @a: string
 * @i: count
 *
 *
 * Return: If not NULL, returns 1 (success).
 *         If NULL, prints "(null)" and returns 0 (success).
 */
int print_s(char *a, int *i)
{
	if (a == NULL)
	{
		printf("(null)");
		(*i) += 1;
		return (0);
	}
	printf("%s", a);
	(*i) += strlen(a);
	return (1);
}
/**
 * print_i - integer.
 *
 * @a: integer
 * @i: count
 *
 * Return: Always 1 (success).
 */
int print_i(int a, int *i)
{
	printf("%d", a);
	(*i)++;
	return (1);
}
/**
 * print_u - unsigned integer.
 *
 * @a: unsigned integer
 * @i: count
 *
 * Return: Always 1 (success).
 */
int print_u(unsigned int a, int *i)
{
	printf("%u", a);
	(*i)++;
	return (1);
}
/**
 * print_o - octal format.
 *
 * @a: octal
 * @i: count
 *
 * Return: Always 1 (success).
 */
int print_o(int a, int *i)
{
	printf("%o", a);
	(*i)++;
	return (1);
}
