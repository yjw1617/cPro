#include <stdio.h>
typedef int *intType;
const intType p;
int main(int argc, char** argv){
    int d = 200;
    const int* c;
    c =  &d;
    const int a = 5;
    int* b = &a;
    *b = 10;
    printf("%d\n", a); 
    return 0;
}