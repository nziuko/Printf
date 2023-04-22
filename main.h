#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>

/* Macro definitions */
#define BUFF_SIZE 1024

/* Function prototypes */
int _printf(const char *format, ...);

/* Helper function prototypes */
int handle_print(const char *format, int *i, va_list list, char buffer[],
int flags, int width, int precision, int size);
int get_flags(const char *format, int *i);
int get_width(const char *format, int *i, va_list list);
int get_precision(const char *format, int *i, va_list list);
int get_size(const char *format, int *i);
void print_buffer(char buffer[], int *buff_ind);

#endif /* MAIN_H */

