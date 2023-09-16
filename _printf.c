#include "main.h"

/**
 * _printf - main function for printing
 * @format: strings to be printed out to stdio
 * @...: list of Rgument
 * Return: return number/ length of string
 */

int _printf(const char *format, ...)
{
	if (format == NULL)
		return (-1);
	va_list m_list;
	int g_strint_cnt = 0;

	va_start(m_list, format)

	while (*format)
	{
		if (*format != '%')
		{
			wrtie(1, &g_string, 1);
		}
		else
		{
			format++;
			if (*format == '\0')
				break;
			if (*format == 'c')
			{
				int g_c = va_arg(m_list, int);

				write(1, &g_c, 1);
				g_strint_cnt++;
			}
			else if (*format == 's')
			{
				char m_string_c = va_arg(m_list, char);

				write(1, &m_string_c, 1);
				g_strint_cnt++;
			}
		}
	}
	format++;
	va_end(m_list);
	return (g_strint_cnt);
}
