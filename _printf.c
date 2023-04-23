#include "main.h"

/**
 * _printf - produces output according to a format
 * @format: character string
 * @...: arguments to print
 * Return: number of characters printed
 */
int _printf(const char *format, ...)
{
	int k;
	va_list args;

	va_start(args, format);
	if (format == NULL || (*format == '%' && format[1] == '\0'))
		return (-1);
	k = printthis(format, args);
	va_end(args);
	return (k);
}
