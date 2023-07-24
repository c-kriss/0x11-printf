#include "main.h"

/**
 * _printf - function that display to stdout
 * @format: format specifier input pointer
 * @...: next arguments.
 *
 * Return: -1 on fail and count on success
 */

int _printf(const char *format, ...)
{
	int count = 0;
	va_list args;

	if (format == NULL)
		return (-1);

	va_start(args, format);

	count = checker(format, args);
	va_end(args);

	return (count);
}
