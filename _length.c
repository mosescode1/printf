#include "main.h"
#include <string.h>
#include <unistd.h>

/**
* _length_m - function tittle
* @str: string
* Return: total number of string length
*/

int _length_m(char *str)
{
	if (str != NULL)
	{
		int mstrnlen = (int)strlen(str);

		write(1, str, mstrnlen);
		return (mstrnlen);
	}
	else
	{
		return (-1);
	}
}
