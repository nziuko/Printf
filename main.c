#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */

int main(void)
{
int i, j, k, l, m, n, o, p;
i = _printf("hello world%s\n", NULL);
j = printf("hello world%s\n", NULL);
k = printf("bye%c\n", NULL);
l = _printf("bye%c\n", NULL);
m = printf("we%\ncool\n");
n = _printf("we%\ncool\n");
o = printf("ok%%%%");
p = _printf("ok%%%%");
printf("%d %d %d %d %d %d %d %d\n", i, j, k, l, m, n, o, p);
return (0);
}
