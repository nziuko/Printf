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
	int i = 0, j = 0;
	char ch, *s;

	while (*format)
	{
		if (*format != '%')
		{
			j = write(1, format, 1);
			i += j;
		}
		else if (*format == '%')
		{
			format++;
			if (*format == '\0')
				return (-1);
			switch (*format)
			{
				case '%':
				j = write(1, format, 1);
				i += j;
				break;
				case 'c':
				ch = va_arg(args, int);
				j = write(1, &ch, 1);
				i += j;
				break;
				case 's':
				s = va_arg(args, char*);
				if (s == NULL)
					s = "(null)";
				while (*s)
				{
					j = write(1, s, 1);
					i += j;
					s++;
				}
				break;
			}
		}
		format++;
	}
	return (i);
}
