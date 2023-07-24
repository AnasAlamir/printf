#include "main.h"

/**
 * _printf - produces output according to a format.
 *
 * @format: input
 *
 * @...: input
 *
 * Return: c
 */
int _printf(const char *format, ...)
{
	int i, c = 0, n = strlen(format);
	va_list arg;
	char *x;

	va_start(arg, format);
	for (i = 0; format[i] && format && i < n; i++)
	{
		if (format[i] == '%' && format[i + 1] == 'c')
		{
			c += printf("%c", va_arg(arg, int));
			i++;
		}
		else if (format[i] == '%' && format[i + 1] == 's')
		{
			x = va_arg(arg, char*);
			c += printf("%s", x);
			i++;
		}
		else if (format[i] == '%' && format[i + 1] == '%')
		{
			c += printf("%%");
			i++;
		}
		else
			c += printf("%c", format[i]);
	}
	va_end(arg);
	return (c);
}
