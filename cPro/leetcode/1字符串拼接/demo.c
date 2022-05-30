#include <stdio.h>
void strCat(char* dest, char* src){
    while(*dest++);
    dest--;
    while(*dest++ = *src++);
}
int main(){
    char a[20] = "h";
    strCat(a, " w");
    printf("%s\n", a);
    return 0;
}