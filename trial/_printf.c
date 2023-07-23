#include "main.h"
/**
 * _printf - Function that handle c,s,% specifies.
 * @format: character string pointer input.
 * @...: input arguments.
 *
 * Return: -1 on fail and count on success.
 */
int _printf(const char *format, ...)
{
	va_list args;
	int i, j, count = 0;

	if (format == NULL)
		return (-1);

	va_start(args, format);

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			i++;
			switch (format[i])
			{
				case 'c':
				count += handle_c(args);
				break;

				case 's':
				count += handle_s(args);
				break;

				case '%':
				count += _putchar('%');
				break;

				default:
				count += _putchar('%');
				count += _putchar(format[i]);
			}
		}

		else
		{
			count += _putchar(format[i]);
		}
	}
	va_end(args);
	return (count);
}
