#ifndef _MANAGE_SIG_H_
#define _MANAGE_SIG_H_

void send_signals(int pid, char *str);
void send_pid(int pid, char *pid_str);
int receive_pid();
void receive_signals(unsigned int pid);

#endif // _MANAGE_SIG_H_
