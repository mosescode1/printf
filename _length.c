#include "main.h"
#include <string.h>
int _length_m(const char *str)
{

	if (str != NULL)
        {	
		int mstrnlen = (int)strlen(str);
                return (mstrnlen);
        }
	return (-1);

}
