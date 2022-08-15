#include <stdlib.h>

int     my_pow(int nb, int p)
{
        if (p == 0)
		return (1);

	return (nb * my_pow(nb, --p));
}