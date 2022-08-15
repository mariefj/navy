#include <stdio.h>
#include <unistd.h>
#include <signal.h>
#include <stdlib.h>
#include <sys/types.h>
#include <string.h>

#include "my.h"
#include "share_pid.h"
#include "manage_sig.h"

char str_global[8192] = "\0";

/*int main(int argc, char *argv[])
{
	char *pid_binary = NULL;
	int pid = 0;

	if (argc > 3 || argc == 2)
	{
		printf("Veuillez ne rentrer aucun argument ou ne rentrer que le pid et une chaine de caractères à envoyer");
		exit(84);
	}
	else if (argc == 3)
	{
		printf("my_pid: %i\n", getpid());
		signal(SIGUSR1, handler);
		pid_binary = convert_str_to_binary(my_itoa(getpid(), &pid_binary));
		send_pid(my_getnbr(argv[1]), pid_binary);
		send_signals(my_getnbr(argv[1]), argv[2]);
	}
	else if (argc == 1)
	{
		printf("my_pid: %i\n", getpid());
		signal(SIGUSR1, sig_handler_1);
		signal(SIGUSR2, sig_handler_2);
		pid = receive_pid();
		receive_signals(pid);
	}

	return (0);
}*/

int main(int argc, char *argv[])
{
	if (argc > 3 || argc == 2)
	{
		printf("Veuillez ne rentrer aucun argument ou ne rentrer que le pid et une chaine de caractères à envoyer");
		exit(84);
	}
	else if (argc == 3)
	{
		player1_connection(argv[1]);
		send_signals(my_getnbr(argv[1]), argv[2]);
	}
	else if (argc == 1)
	{
		player2_connection();
	}

	return (0);
}