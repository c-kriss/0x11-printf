#include "main.h"


int print_number(va_list args)
{
	int num = va_arg(args, int);
	int divisor, count = 0;
	unsigned int temp;

	if (num < 0)
	{
		count += _putchar('-');
		num = -num;
	}

	if (num == 0)
	{
		count += _putchar('0');
		return (count);
	}

	temp = num;
	divisor = 1;

	while (temp > 9)
	{
		divisor *= 10;
		temp /= 10;
	}

	while (divisor > 0)
	{
		int digit = num / divisor;
		count += _putchar('0' + digit);
		num %= divisor;
		divisor /= 10;
	}

	return (count);
}



int print_unsigned_number(va_list args)
{
	unsigned int num = (unsigned int)va_arg(args, int);
        int divisor, count = 0;
        unsigned int temp;

        if (num == 0)
        {
                count += _putchar('0');
                return (count);
        }

        temp = num;
        divisor = 1;

        while (temp > 9)
        {
                divisor *= 10;
                temp /= 10;
        }

        while (divisor > 0)
        {
                int digit = num / divisor;
                count += _putchar('0' + digit);
                num %= divisor;
                divisor /= 10;
        }

        return (count);
}



int p_char(va_list args)
{
	char c = (char)va_arg(args, int);

	_putchar(c);
	return (1);
}



int p_string(va_list args)
{
	int i;
	const char *str = va_arg(args, const char *);

	if (str == NULL)
		str = "(null)";

	for (i = 0; str[i] != '\0'; i++)
		_putchar(str[i]);

	return (i);
}



int p_percent(__attribute__((unused)) va_list args)
{
	_putchar('%');
	return (1);
}



int p_integer(va_list args)
{
	int n;

	n = print_number(args);
	return (n);

}
