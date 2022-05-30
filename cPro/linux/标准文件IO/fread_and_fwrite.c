#include <stdio.h>
#include <string.h>
int main(){
    FILE* fp;
    char buf[30] = {0};
    fp = fopen("./test.txt", "a+");
    if(fp == NULL){
        perror("fopen");
        return -1;
    }
    if(fread(buf, 30, 1, stdin) < 0){//从终端读取30个字符大小的内容
        perror("fgets");
        return -1;
    }
    if(fwrite(buf, strlen(buf), 1, fp) < 0){
        perror("fwrite");
        return -1;
    }
    fclose(fp);
}