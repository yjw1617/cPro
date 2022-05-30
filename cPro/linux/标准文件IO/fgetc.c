#include <stdio.h>

int main(){
    FILE* fp;
    int achar;
    fp = fopen("test.txt", "w+");
    if(fp == NULL){
        perror("fopen");
        return -1;
    }
    //往文件写入一个字符
    achar = fgetc(stdin);
    int ret = fputc(achar, fp);
    if(ret < 0){
        perror("fputc");
        return -1;
    }
    //将文件指针指向文件的开头
    rewind(fp);
    //从文件里面获取一个字符
    achar = fgetc(fp);
    //将该字符写入到标准输出里面
    fputc(achar, stdout);

    //关闭文件的句柄
    fclose(fp);
    return 0;
}