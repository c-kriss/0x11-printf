#include "main.h"

/**
 * handle_s - handle the strings.
 * @args: input arguments.
 * Return: 1 on success
 */

int handle_s(va_list args)
{
	int i, count = 0;
	char *str = va_arg(args, char *);

	if (str == NULL)
	{
		return ('\0');
	}

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
		count++;
	}

	return (count);
}
