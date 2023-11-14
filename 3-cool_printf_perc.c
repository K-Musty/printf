#include "main.h"
#include <stdarg.h>

/**
 * _cool_printf_perc - prints percentage sign
 * @arr: argument
 *
 * Return: always 1 on success
 */
int _cool_printf_perc(va_list arr)
{
	(void) arr;
	_putchar('%');
	return (1);
}
