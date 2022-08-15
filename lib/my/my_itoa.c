#include <stdlib.h>

#include "my.h"

char *my_itoa(unsigned int nb, char **str)
{
	if (nb < 10)
	{
		*str = my_append_c(*str, '0' + nb);
		if (*str == NULL)
			return (NULL);

		return(*str);
	}
	*str = my_itoa(nb / 10, str);
	*str = my_append_c(*str, '0' + (nb % 10));
	if (*str == NULL)
			return (NULL);

	return (*str);
}