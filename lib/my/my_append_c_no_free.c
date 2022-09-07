#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

#include "my.h"

char	*my_append_c_no_free(char *str, char c)
{
	int len = my_strlen(str);
	char *new_str = (char *)malloc((len + 1) * sizeof(char));

	if (new_str == NULL)
		return (NULL);
	if (str != NULL)
	{
		my_memcpy(new_str, str, len);
		new_str[len] = c;
		new_str[len + 1] = '\0';

		return (new_str);
	}
	free(new_str);

	return (NULL);
}