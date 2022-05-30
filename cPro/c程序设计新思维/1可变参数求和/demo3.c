#include <math.h>
#include <stdio.h>
#define makelist(...) (double[]){__VA_ARGS__, NAN}
#define sum(list1, list2) sumA(makelist list1, makelist list2)
//将数组1和数组2中的元素相加结果返回
double sumA(double* list1, double* list2){
    double out = 0;
    for(int i = 0; !isnan(list1[i]); i++){
        out += list1[i];
    }
    for(int i = 0; !isnan(list2[i]); i++){
        out += list2[i];
    }
    return out;
}

int main(){
    printf("ret = %lf\n", sum((2.0, 41.0,3.0),(31.0, 2.0)));
    return 0;
}