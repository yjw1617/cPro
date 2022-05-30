// 3. gcc编译的步骤
// 下面演示将main.c文件编译成main文件的步骤
// 1: gcc main.c -E -o main.i   //预处理
// 2: gcc main.i -S -o main.s   //编译
// 3: gcc main.s -c -o main.o   //汇编
// 4: gcc main.o -o main;       //链接
#include <stdio.h>
int main(int argc, char** argv){
    printf("hello world!\n");
    return 0;
