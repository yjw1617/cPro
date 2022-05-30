#include <stdio.h>
#include <stdlib.h>
//ascii中0-9对应的整数为48-57
int AtIo(char* str){
    int value = 0;
    char sysmbol = ' ';
    // 先取出空格
    while(*str == ' '){
        str++;
    }
    //取出空格后有字母直接返回0
    // 取+
    if(*str == '+'){
        sysmbol = '+';
        str++;
    }else if(*  str == '-'){
        sysmbol = '-';
        str++;
    }
    //取数字并做计算,如果value大于或小于限定值直接返回
    while(*str >= '0' && *str <= '9'){
        if(value + (*str - 48) / 10.0 >= 214748364.7 && sysmbol != '-'){
            return 2147483647;
        }else if(value + (*str - 48) / 10.0 >= 214748364.8 && sysmbol == '-'){
            return -2147483648;
        }
        value  = value * 10 + (*str - 48);
        str++; 
    }
    if(sysmbol != '-'){
        return value;
    }else{
        return -value;
    }
}

int main(int argc, char** argv){
    char* str = "-2147483647";
    printf("%d \n", AtIo(str));
    return 0;
}











