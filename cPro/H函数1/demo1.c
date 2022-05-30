#include <stdio.h>
int strlen(const char* str){
    int size = 0;
    while(*str++ && ++size);
    return size;
}
int main(int argc, char** argv){
    printf("%d\n", strlen("hello!"));
    return 0;
}