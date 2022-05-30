#include <stdio.h>
int main(int argc, char** argv){
    int* a = (int*)0x10;
    printf("%p\n", a);
    printf("%p\n", (a + 1));
}