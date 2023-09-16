#include "main.h"
#include <string.h>
#include <unistd.h>
int _length_m(char *str)
{
	int m = 0;

	while (str[m] != '\0')
		m++;
        write(1, str,m);
	return (m);
}
