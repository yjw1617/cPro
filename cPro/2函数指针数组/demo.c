#include <stdio.h>
void sum(int a, int b){
    printf("a + b = %d\n", a + b);
}

void sub(int a, int b){
    printf("a - b = %d\n", a - b);
}

typedef void (*jisuan[2])(int, int);
int main(int argc, char** argv){
    jisuan ji;
    ji[0] = sum;
    ji[1] = sub;
    (ji[0])(3,4);
    (ji[1])(10,5);
    return 0;
}