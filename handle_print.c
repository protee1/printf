#include "main.h"

/**
 * handle_print - print an argument based on its type
 * by isaac and protee
 * @format: formatted string to print arguments
 * @ind: ind.
 * @buffer: buffer array to handle print.
 * flags: calculates flying flags
 *@width: get width
 *@precision: specify precision.
 *@size: size specification
 *Return: 1 or 2;
 */
int handle_print(const char *format, int *ind, va_list list, char buffer[],
int flags, int width, int precision, int size)
{
int i, unknown_len = 0;
printed_chars = -1;
format_t format_type[] = {
{'c', print_char}, {'s', print_string}, {'%' print_percent},
{'i', print_int}, {'d', print_int}, {'b', print_binary},
{'u', print_unsigned}, {'o', print octal}, {'x', print_hexadecimal},
{'x', print_hexa_upper}, {'p', print_pointer}, {'S', print_non_printable},
{'r', print_reverse}, {'R', print_rot13string, {'\0', NULL}
};
for (i = 0; format_types[i].format != '\0'; i++)
if (format[*ind] == format_types[i].format)
return (format_types[i].fn(list, buffer, flags, width, precision, size));
if (format_types[i].format == '\0')
{
if (format[*ind] == '\0')
return (-1);
unknown_len += write(1, "%%", 1);
if (format[*ind - 1] == ' ')
unknown_len += write(1, " ", 1);
else if (width)
