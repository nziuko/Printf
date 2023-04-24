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
	char ch, *s;

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
				ch = va_arg(args, int);
				i += _putchar(ch);
				break;
				case 's':
				s = va_arg(args, char*);
				if (s == NULL)
					s = "(null)";
				for (; *s != '\0'; s++)
					i += _putchar(*s);
				break;
				default:
				i += _putchar('%');
				i += _putchar(*format);
				break;
			}
		}
		format++;
	}
	return (i);
}
