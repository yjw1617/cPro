#include <stdio.h>
#include <assert.h>
void show(int n){
    int a[n];
    a[0] = n;
    printf("%d\n", a[0]);
}
int main(int argc, char** argv){
    // printf("%s, %s, %s\n", argv[1], argv[2], argv[3]);
    int a[] = {23,193,12};
    int *b = a;
    b[0] = 100;
    assert(a[0] == 100);
    // show(100)
    int len = 0;
    printf("请输入创建的数组长度:\n");
    scanf("%d", &len);
    int c[len];
    for(int i = 0; i < sizeof(c) / sizeof(int); i++){
        c[i] = i;
    }
    for(int i = 0; i < sizeof(c) / sizeof(int); i++){
        printf("%d\n", c[i]);
    }
}