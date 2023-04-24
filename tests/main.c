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
i = _printf("\%");
j = _printf("yousef%s\n", "sherif");
k = _printf("%%s", NULL);
l = _printf("\nbye\n", NULL);
m = _printf("%s goal\n", "scored");
n = _printf("we\%\ncool\n");
o = _printf("catherine%\n");
p = _printf("%");
printf("%d %d %d %d %d %d %d %d\n", i, j, k, l, m, n, o, p);
return (0);
}
