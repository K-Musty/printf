#include "main.h"
#include <stdarg.h>

/**
 * _cool_printf_int - prints integer
 * @arr: argument
 *
 * Return: numbers printed
 */

int _cool_printf_int(va_list arr)
{
	int num = va_arg(arr, int);
	int lens = 0;

	if (num < 0)
	{
		_putchar('-');
		lens++;
		num = -num;
	}
	if (num == 0)
	{
		_putchar('0');
		return (1);
	}
	return (lens);
}
