#include "main.h"

/**
 * handle_c - handle the characters.
 * @args: input arguments.
 * Return: 1 on success
 */

int handle_c(va_list args)
{
	char c = (char)va_arg(args, int);

	return (_putchar(c));
}
