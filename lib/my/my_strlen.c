#include <unistd.h>
#include <stdlib.h>

#include "my.h"

int	my_strlen(char const *str)
{
	int i = 0;

	if (str == NULL)
		return (0);
	while (str[i] != '\0')
	{
		i++;
	}

	return (i);
}