#include <stdio.h>
char* itoa(int n){
    int r, i = 0;
    static char p[50];
    while(n){
        r = n % 10;
        n /= 10;
        p[i] = r + '0';
        i++;
    }
    p[i] = '\0';
    return p;
}
int main(int argc, char* argv[]){
    int n = 0;
    char* s = NULL;
    printf("input:\n");
    scanf("%d", &n);
    s = itoa(n);
    puts(s);
    return 0;
}