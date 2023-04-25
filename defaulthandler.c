#include "main.h"

/**
 * defaulthandler - handle default %
 * @format: current character
 * Return:  number of characters printed
 */
int defaulthandler(const char *format)
{
int i = 0;

i += _putchar('%');
i += _putchar(*format);
return (i);
}
