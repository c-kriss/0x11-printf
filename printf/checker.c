#include "main.h"

int checker(const char *format, va_list args)
{
	int i;
	int count = 0;

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			i++;

			switch (format[i])
			{
				case 'c':
				count += p_char(args);
				break;

				case 's':
				count += p_string(args);
				break;

				case '%':
				count += p_percent(args);
				break;

				case 'd':
				case 'i':
				count += p_integer(args);
				break;

				case 'u':
				count += print_unsigned_number(args);
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

	return (count);
}
