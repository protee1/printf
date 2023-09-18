#ifndef _MAIN_H_
#define _MAIN_H_

#include <unistd.h>
#include <stdarg.h>
#include <stdlib.h>

int _printf(char *format, ...);
int put_chars(char c);
int put_s(char *c);
int get_flags(const char *format, int *i);
int get_precision(const char *format, int *i, va_list list);
int get_width(const char *format, int *i, va_list list);
int handle_print(const char *format, int *ind, va_list list, char buffer[],
int flags, int width, int precision, int size);


#endif
