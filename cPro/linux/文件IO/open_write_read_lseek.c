#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <string.h>
int main(){
    int fd;
    fd = open("./test.txt", O_RDWR | O_TRUNC | O_CREAT, 0662);
    if(fd < 0){
        perror("open");
        goto end;
    }
    int ret = write(fd, "hello world yjwdsad", strlen("hello world yjwdsad"));
    if(ret < 0){
        perror("write");
        goto end;
    }

    lseek(fd, 0, SEEK_SET);

    //读文件
    char buf[30] = {0};
    ret = read(fd, buf, sizeof(buf));
    if(ret < 0){
        perror("read");
        goto end;
    }

    //打印出buf
    printf("data = %s\n", buf);
end:
    close(fd);
    return 0;
}