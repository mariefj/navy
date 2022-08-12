#include <stdio.h>
#include <unistd.h>
#include <signal.h>
#include <stdlib.h>
#include <sys/types.h>
#include <string.h>

#include "my.h"
#include "handlers.h"
#include "manage_sig.h"

extern char str_global[8192];

void send_signals(int pid, char *str)
{
	int i = 0;
	char *str_binary = NULL;

	str_binary = convert_str_to_binary(str);
	usleep(100000);
	while (str_binary[i] != '\0')
	{
		usleep(1000);
		kill(pid, str_binary[i] == '0' ? SIGUSR1 : SIGUSR2);
		pause();
		i++;
	}
	free(str_binary);
}

void send_pid(int pid, char *pid_str)
{
	int i = 0;

	while (pid_str[i] != '\0')
	{
		kill(pid, pid_str[i] == '0' ? SIGUSR1 : SIGUSR2);
		usleep(1000);
		i++;
	}
}

int receive_pid()
{
	int i = 0;
	char *pid_binary;
	int pid;
	int exit = 0;

	while (exit == 0)
	{
		pause();
		i++;
		pid_binary = convert_binary_to_str(str_global);
		if (i % 8 == 0 && pid_binary[(i / 8) - 1] == '\0')
		{
			pid = my_getnbr(pid_binary);
			str_global[0] = '\0';
			exit += 1;
		}
		free(pid_binary);
	}

	return (pid);
}

void receive_signals(unsigned int pid)
{
	int i = 0;
	char *str;

	while (1)
	{
		pause();
		i++;
		kill(pid, SIGUSR1);
		if (i % 8 == 0)
		{
			str = convert_binary_to_str(str_global);
			if (str[(i / 8) - 1] == '\0')
			{
				my_putstr(str);
				my_putchar('\n');
				str_global[0] = '\0';
			}
		}
	}
}