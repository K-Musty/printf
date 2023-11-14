#include "main.h"
#include <stdarg.h>

/**
 * _ident - identifies the structure
 *@format: format specifier pointer
 *@arr: argument
 *
 *Return: prints output
 */
int _ident(const char *format, va_list arr)
{
	outputt_t form[] = {
		{'c', _cool_printf_char},
		{'s', _cool_printf_str},
		{'%', _cool_printf_perc},
		{'i', _cool_printf_int},
		{'d', _cool_printf_int}
	};
	int i = 0;

	while (i < 5)
	{
		if (form[i].format == *format)
		{
			return (form[i].funct(arr));
		}
		i++;
	}
	_putchar('%');
	_putchar(*format);
	return (2);
}
