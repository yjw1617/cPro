#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int* get_memory(int n){
    int* p;
    int i;
    if((p = (int*)malloc(n * sizeof(int))) == NULL){
        printf("malloc failed!\n");
        return p;
    }
    memset(p, 0, n * sizeof(int));
    for(int i = 0; i < n; i++){
        p[i] = i;
    }
    return p;
}
int main(int argc, char** argv){
    int* p;
    p = get_memory(10);
    for(int i = 0; i < 10; i++){
        printf("%d ", p[i]);
    }
    putchar('\n');
    free(p);
    return 0;
}