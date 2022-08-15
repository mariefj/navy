#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <limits.h>

#include "my.h"

int	my_putnbr_base_unsigned(unsigned int nbr, char const *base)
{
	int i = 0;
	char str[64];
	int base_len = my_strlen(base);

	while (nbr > 0)
	{
		str[i] = base[nbr % base_len];
		nbr = nbr / base_len;
		i++;
	}
	str[i] = '\0';

	return (my_putstr(my_revstr(str)));
}
