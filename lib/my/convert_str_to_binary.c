#include <stdlib.h>

#include "my.h"

char *convert_str_to_binary(char *str)
{
	int i = 0;
	int len = my_strlen(str);
	char *str_to_binary = (char *)malloc(8 * (len + 1) * sizeof(char) + 1);
	char *char_to_str = NULL;

	if (str_to_binary == NULL)
		return (NULL);

	str_to_binary[0] = '\0';
	while (str[i] != '\0')
	{
		char_to_str = convert_char_to_binary(str[i]);
		if (char_to_str == NULL)
			return (NULL);

		my_strcat(str_to_binary, char_to_str);
		i++;
	}
	my_strcat(str_to_binary, "00000000");

	return(str_to_binary);
}