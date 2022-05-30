#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/wait.h>
int main(){
	pid_t pid;
	pid = fork();
	if(pid < 0){
		perror("fork");
		return -1;
	}else if(pid == 0){
		printf("child process\n");
		//如果子进程 先结束，父进程没有为子进程手尸体  那子进程将变成僵尸进程
		sleep(10);
		exit(0);
	}else{
		printf("father process\n");
		//僵尸进程的解决办法
		waitpid(pid, NULL, WUNTRACED);
	}

	return 0;
}
