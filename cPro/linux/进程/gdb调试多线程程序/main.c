#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int main(){
    pid_t pid = fork();
    if(pid < 0){
        perror("fork");
        exit(0);
    }else if(pid > 0){
        while(1){
            printf("father process\n");
            sleep(1);
        }
    }else{
        while(1){
            printf("child process\n");
            sleep(1);
        }
    }
    return 0;
}