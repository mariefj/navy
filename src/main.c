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

int main(int argc, char *argv[])
{
	if (argc > 3 || argc == 2)
	{
		printf("Veuillez ne rentrer aucun argument ou ne rentrer que le pid et le chemin du fichier des positions");
		exit(84);
	}
	else if (argc == 3)
	{
		player2_connection(argv[1]);
		send_signals(my_getnbr(argv[1]), argv[2]);
		printf("successfully connected\n");
	}
	else if (argc == 1)
	{
		player1_connection();
	}

	return (0);
}