#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <signal.h>
#include <sys/types.h>
#include <string.h>

#include "my.h"
#include "share_pid.h"
#include "handlers.h"
#include "manage_sig.h"

extern char str_global[8192];

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

void player1_connection(char *pid_player)
{
	char *pid_binary = NULL;
	int pid_p = my_getnbr(pid_player);

	printf("my_pid: %i\n", getpid());
	signal(SIGUSR1, handler);
	pid_binary = convert_str_to_binary(my_itoa(getpid(), &pid_binary));
	send_pid(pid_p, pid_binary);
	printf("successfully connected\n");
}

void player2_connection()
{
	int pid = 0;

	printf("my_pid: %i\n", getpid());
	printf("waiting for enemy connection...\n");
	signal(SIGUSR1, sig_handler_1);
	signal(SIGUSR2, sig_handler_2);
	pid = receive_pid();
	receive_signals(pid);
	printf("enemy connected\n");
}