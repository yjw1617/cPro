#include <stdio.h>
int main(int argc, char** argv){
    int* a;
    *a = 10;//野指针
    printf("%d\n", *a);
    return 0;
}