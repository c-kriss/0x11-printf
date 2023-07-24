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
	int i, j;
	int count = 0;

	if (format == NULL)
	{
		return (-1);
	}

	va_start(args, format);

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			i++;

			if (format[i] == 'c')
			{
				char c = (char)va_arg(args, int);

				count += _putchar(c);
			}

			else if (format[i] == 's')
			{
				char *str = va_arg(args, char*);

				if (str == NULL)
				{
					str = "Is null";
				}

				for (j = 0; str[j] != '\0'; j++)
				count += _putchar(str[j]);
			}

			else if (format[i] == '%')
			{
				count += _putchar('%');
			}

			else
			{
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
