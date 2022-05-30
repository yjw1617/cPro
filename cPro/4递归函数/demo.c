#include <stdio.h>
#include <limits.h>
double factorial(int n){
    if(n <= 1){
        return 1;
    }
    return (n * factorial(n - 1));
}
int main(int argc, char** argv){
    double r;
    r = factorial(101);
    printf("5! = %lf\n", r);
    printf("%li\n", LONG_MAX);
    return 0;
}