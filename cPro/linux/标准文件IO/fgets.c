#include <stdio.h>
#include <string.h>
int main(){
    char buf[50];
    //打开文件
    FILE* fp = fopen("test.txt", "a+");
    if(fp == NULL){
        perror("fopen");
        return -1;
    }
    //使用键盘读入字符串到buff
    if(fgets(buf, 30, stdin) == NULL){
        perror("fgets");
        return -1;
    }
    // printf("buf = %s\n", buf);
    fputs(buf, stdout);
    //将buf写入到文件
    if(fputs(buf, fp) < 0){
        perror("fputs");
        return -1;
    }
    //将文件读出到buf
    memset(buf, 0, strlen(buf));
    fseek(fp, 0, SEEK_SET);//a模式下直接失效
    if(fgets(buf, 30, fp) == NULL){//读取一行
        perror("fgets");
        return -1;
    }
    //将buff写到屏幕
    if(fputs(buf, stdout) < 0){
        perror("fputs");
        return -1;
    }
    return 0;
}