#include <unistd.h>
#include <stdlib.h>

#include "my.h"

char	*my_append_c(char *str, char c)
{
	int i = 0;
	int len = my_strlen(str) + 2;
	char *new_str = (char *)malloc(len * sizeof(char));

	if (new_str == NULL)
		return (NULL);
	if (str == NULL)
	{
		str = (char *)malloc(1 * sizeof(char));
		if (str == NULL)
			return (NULL);
		str[0] = '\0';
	}
	while (str[i] != '\0')
	{
		new_str[i] = str[i];
		i++;
	}
	new_str[i] = c;
	new_str[i + 1] = '\0';
	free(str);

	return (new_str);
}
