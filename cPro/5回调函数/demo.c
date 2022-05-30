#include <stdio.h>
typedef int *(CallBackFun)(char*);
int fun(char* p){
    printf("fun %s\n", p);
    return 0;
}
int call(CallBackFun pcallBack, char* p){
    printf("call %s\n", p);
    pcallBack(p);
    return 0;
}
int main(int argc, char** argv){
    char* p = "Hello";
    call(fun, p);
    return 0;
}