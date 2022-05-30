#include <stdio.h>
#include <string.h>
int main(int argc, char** argv){
    char* a[3] = {"apple","pear","blaner"};
    for(int i = 0; i < sizeof(a) / sizeof(char*); i++){
        for(int j = 0; j < strlen(a[i]); j++){
            putchar(*(*(a + i) + j));
            // printf("%s \n", a[i]);
        }
        puts("");
    }
    return 0;
}