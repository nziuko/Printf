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
	char ch, *s, c = '%';

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
				return (i);
			switch (*format)
			{
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
				default:
				j = write(1, &c, 1);
				j = write(1, format, 1);
				i += 2;
				break;
			}
		}
		format++;
	}
	return (i);
}
