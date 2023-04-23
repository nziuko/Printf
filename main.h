#ifndef _FILE_NAME_H_
#define _FILE_NAME_H_

#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>

int _printf(const char *format, ...);
int printthis(const char *format, va_list args);

#endif
