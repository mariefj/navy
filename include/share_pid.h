#ifndef _SHARE_PID_H_
#define _SHARE_PID_H_

void send_pid(int pid, char *pid_str);
int receive_pid();
void player1_connection(char *pid_player);
void player2_connection();

#endif // _SHARE_PID_H_
