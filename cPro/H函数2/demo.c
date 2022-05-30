#include <stdio.h>
char* Strcat(char* str1,const char* str2){
    char* start = str1;
    while(*str1++);
    str1--;//让指针指到字符串的最后一位
    while(*str1++ = *str2++);
    return start;
}
int main(int argc, char** argv){
    char a[10] = "I am";
    printf("%s\n", Strcat(a, " a boy"));
    return 0;
}