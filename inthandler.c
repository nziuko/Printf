#include "main.h"

/**
 * inthandler - deal with %d %i
 * @args: arguments
 * Return: number of ints printed
 */
int inthandler(va_list args)
{
	int x, xx;
	int i = 0;
	int decimal = 1;

	x = va_arg(args, int);
	if (x < 0)
	{
		x *= -1;
		i += _putchar('-');
	}
	xx = x;
	for (; xx > 9; xx /= 10)
		decimal *= 10;
	while (decimal >= 1)
	{
		i += _putchar((x / decimal) % 10 + '0');
		decimal /= 10;
	}
	return (i);
}
