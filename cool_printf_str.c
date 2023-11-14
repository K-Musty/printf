#include "main.h"
#include <stdarg.h>

/**
 * _cool_printf_str - prints string
 * @arr: argument
 *
 * Return: string
 */
int _cool_printf_str(va_list arr)
{
	char *str = va_arg(arr, char *);
	int lens = 0;

	if (!str)
		str = "(null)";
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
		lens++;
	}

	return lens;
}
