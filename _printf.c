#include "main.h"

/**
 * _printf - print standard output.
 * @format: character to print.
 * Return: number of charaters.
 */
int _printf(char *format, ...)
{
	int i, s_count,count = 0;

	va_list args;

	if (format == NULL)
	{
		return (-1);
	}

	va_start(args, format);
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] != '%')
		{
			put_chars(format[i]);
		}
		else if (format[i + 1] == 'c')
		{
			put_chars(va_arg(args, int));
			i++;
		}
		else if (format[i + 1] == 's')
		{
			s_count = put_s(va_arg(args, char*));
			count += (s_count - 1);

		}
		else if (format[i +1] == '%')
		{
			put_chars(format[i]);
		}
		count += 1;
	}
	va_end(args);
	return (count);
}
