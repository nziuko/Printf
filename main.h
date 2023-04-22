#ifndef _FILE_NAME_H_
#define _FILE_NAME_H_
int _printf(const char *format, ...);
int handle_print(const char *fmt, int *i,
va_list list, char buffer[], int flags, int width, int precision, int size);
#endif
