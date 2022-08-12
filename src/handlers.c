#include <stdlib.h>

#include "my.h"
#include "handlers.h"

extern char str_global[8192];

void handler()
{
}

void sig_handler_1()
{
	int len = my_strlen(str_global);
	str_global[len] = '0';
	str_global[len + 1] = '\0';
}

void sig_handler_2()
{
	int len = my_strlen(str_global);
	str_global[len] = '1';
	str_global[len + 1] = '\0';
}