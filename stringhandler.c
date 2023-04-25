#include "main.h"

/**
 * stringhandler - handle strings %s
 * @args: arguments
 * Return:  number of characters printed
 */
int stringhandler(va_list args)
{
int i = 0;
char *s;

s = va_arg(args, char*);
if (s == NULL)
s = "(null)";
for (; *s != '\0'; s++)
i += _putchar(*s);
return (i);
}
