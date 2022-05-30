#include <stdio.h>
#include <unistd.h>
#include <string.h>

int main(){
    char buf[30];
    FILE* fp;
    fp = fopen("test.txt", "w+");
    if(fgets(buf, 30, stdin) == NULL){  //如果终端输入长度小于30 则自动给buf加\n
        perror("fgets");
        return -1;
    }
    // buf[strlen(buf) - 1] = '\0';
    //将buf写入文件中
    fputs(buf, fp);
    fclose(fp);
    while(1){}
    return 0;
}