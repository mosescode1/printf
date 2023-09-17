#include <stdio.h>
#include <unistd.h>

/**
 * _stringcheck - check string
 * @sttp: string value
 * Return: length
 */

int _stringcheck(char *sttp)
{
	int g_strint_cnt = 0;

	if (sttp == NULL)
	{
		write(1, "(null)", 6);
		return (g_strint_cnt += 6);
	}
	else
	{
		int _str_length = 0;

		while (sttp[_str_length] != '\0')
		{
			write(1, &sttp[_str_length], 1);
			_str_length++;
		}
		return (g_strint_cnt += _str_length);
	}
}
