#include <math.h>
#include <stdio.h>
double Sum(double* a){
    double sum = 0;
    for(int i = 0; !isnan(a[i]); i++){
        sum += a[i];
    }
    return sum;
}
int main(){
    double a[] = {213,32231,4,13,1,31,NAN};
    int su = Sum(a);
    printf("%d\n", su);
    return 0;
}