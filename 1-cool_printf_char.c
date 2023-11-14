#include "main.h"
#include <stdarg.h>

/**
 * _cool_printf_char - outputs Characters
 * @arr: argument
 * @
 * Return: character
 */
int _cool_printf_char(va_list arr)
{
	char c = va_arg(arr, int);

	_putchar(c);
	return (1);
}
