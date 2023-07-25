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

	va_start(arg, format);
	for (i = 0; format[i] && format && i < n; i++)
	{
		if (format[i] == '%')
		{
		if (format[i + 1] == 'c')
			c += print_c(va_arg(arg, int), &i);
		else if (format[i + 1] == 's')
			c += print_s(va_arg(arg, char*), &i);
		else if (format[i + 1] == '%')
		{
			c += printf("%%");
			i++;
		}
		else if ((format[i + 1] == 'i' || format[i + 1] == 'd' || format[i + 1] == 'o' || format[i + 1] == 'x' || format[i + 1] == 'X'))
			c += print_i(va_arg(arg, int), &i);
		else if (format[i + 1] == 'u')
			c += print_i(va_arg(arg, unsigned int), &i);
		}
		else
			c += printf("%c", format[i]);
	}
	va_end(arg);
	return (c);
}
