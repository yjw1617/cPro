#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
int main(){
    pid_t pid;
    pid = fork();
    if(pid < 0){
        perror("fork");
        exit(0);
    }else if(pid > 0){
        exit(0);
    }else{
        printf("I am a deamon\n");
        printf("sid=%d,pid=%d,pgid=%d\n",getsid(getpid()),getpid(),getpgid(getpid()));
        sleep(15);
        
        //让自己成为
        //让自己成为主人
        pid = setsid();
        if(pid < 0){
            perror("setsid");
            exit(0);
        }
        printf("after sid=%d,pid=%d,pgid=%d\n",getsid(getpid()),getpid(),getpgid(getpid()));
        chdir("/");

        if(umask(0)<0){//设置该进程能创建文件的最大权限为0777
            perror("unmask");
            exit(0);
        }
        //关闭标准输入  标准输出  标准错误
        close(0);
        close(1);
        close(2);

        while(1){
            sleep(1);
        }

    }
    return 0;
}