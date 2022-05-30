#include <stdio.h>
#include <math.h>
double sum_array(double* a){
    double out = 0;
    for(int i = 0; !isnan(a[i]); i++){
        out += a[i];
    }
    return out;
}
#define sum(...) sum_array((double[]){__VA_ARGS__, NAN})
int main(){
    printf("%lf\n", sum(23,42331,3,1));
    printf("%lf\n", sum(23,421));
}