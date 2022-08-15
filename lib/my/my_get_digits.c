#include "my.h"

int	my_get_digits(int nb)
{
	int i = 1;

	nb = my_abs(nb);
	while (nb >= 10)
	{
		nb /= 10;
		i++;
	}

	return (i);
}