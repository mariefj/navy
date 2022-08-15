#include <stdlib.h>

#include "my.h"

char convert_binary_to_char(char *b)
{
	int i = 0;
	int len = 7;
	int c = 0;

	while (i < 8)
	{
		c = (b[i] - '0') * my_pow(2, len) + c;
		i++;
		len--;
	}

	return(c);
}