#include <stdio.h>
typedef int (*SUM)(int, int);
int sum(int a, int b){
    return a + b;
}
int main(int argc, char** argv){
    int (*sum2)(int, int) = sum;
    printf("%d\n", sum2(19,31));
    SUM sum1 = sum;
    printf("%d\n", sum1(3,5));
}