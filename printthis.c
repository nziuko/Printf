#include "main.h"

/**
 * printthis - handle the following conversion specifiers
 * %c %s %
 * @format: character string
 * @args: arguments
 * Return:  number of characters printed
 */
int printthis(const char *format, va_list args)
{
	int i = 0;

	while (*format)
	{
		if (*format != '%')
		{
			i += _putchar(*format);
		}
		else if (*format == '%')
		{
			format++;
			if (*format == '\0')
				return (-1);
			switch (*format)
			{
				case '%':
				i += _putchar('%');
				break;
				case 'c':
				i += charhandler(args);
				break;
				case 's':
				i += stringhandler(args);
				break;
				default:
				i += defaulthandler(format);
				break;
			}
		}
		format++;
	}
	return (i);
}
