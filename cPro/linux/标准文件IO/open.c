#include <stdio.h>
#include <string.h>
int main(){
    FILE* fp;
    fp = fopen("./test.txt", "a+");
    if(fp == NULL){
        perror("fopen");
        return -1;
    }
    printf("open file success\n");
}