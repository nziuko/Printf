#include "main.h"
/**
 * charhandler - handle characters %c
 * @args: arguments
 * Return:  number of characters printed
 */

int charhandler(va_list args)
{
char ch;
int i = 0;

ch = va_arg(args, int);
i += _putchar(ch);
return (i);
}
