#include <stdlib.h>

#include "my.h"

char *convert_char_to_binary(unsigned char c)
{
	int i = 7;
	unsigned char nbr;
	char *b = (char *)malloc(8 * sizeof(char) + 1);

	if (b == NULL)
		return (NULL);

	nbr = c;
	while (i > 0)
	{
		b[i] = nbr % 2 ? '1' : '0';
		nbr = nbr / 2;
		i--;
		if (nbr == 0)
		{
			b[i] = '0';
		}
	}
	b[8] = '\0';

	return(b);
}