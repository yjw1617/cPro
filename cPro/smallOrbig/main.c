#include <stdio.h>
int main(){
    int a = 0x12345678;
    char* c = (char*)&a;//get low byte
    if(*c == 0x12){
        printf("this is big\n");
    }else if(*c = 0x78){
        printf("this is small\n");
    }
    return 0;
}