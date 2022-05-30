#include <stdio.h>
#include <pthread.h>
#include <unistd.h>
#include <stdlib.h>
int main(){
	pid_t pid;		
	pid = fork();
	if(pid < 0){
		perror("fork");
		return -1;
	}else if(pid == 0){
		while(1){
			sleep(5);
			printf("child\n");
		}
	}else{
		while(1){
			sleep(5);
			printf("father\n");
		}	
	}
	exit(0);
	return 0;
}

