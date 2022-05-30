#include <stdio.h>
int main(int argc, char** argv){
    int b[][3] = {{3,5,1}, {93,32,4}, {4,0}};
    int (*a)[3];
    a = b;
    for(int i = 0; i < sizeof(b) / sizeof(b[0]); i++){
        for(int j = 0; j < sizeof(b[i]) / sizeof(int); j++){
            printf("%d ", *(*(a + i) + j));
        }
        puts("");
    }
    // printf("%d\n", a[1][0]);
    // for(int i = 0; i < sizeof(b) / sizeof(int); i++){
    //     printf("%d ",(*a + i));
    // }

    puts("");
    return 0;
}