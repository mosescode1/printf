#include "main.h"
#include <string.h>
#include <unistd.h>
int _length_m(char *str)
{
	if (str != NULL)
        {
                int mstrnlen = (int)strlen(str);
		write(1, str, mstrnlen);
                return (mstrnlen);
        }
        return (-1);
}
