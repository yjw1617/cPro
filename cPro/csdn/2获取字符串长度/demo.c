/*
函数:int getStrLen(const char* headChar)
输入参数:
headChar:需要判断长度的字符串的首地址
返回值:字符串长度
*/ 
#include <stdio.h>
int getStrLen(const char* headChar){
    int len = 0;//接受字符串长度的一个变量
    while(*headChar){//如果headChar指针的值不为空,则进入while循环
        headChar++;//将指针移动到下一位,相当于移动到下一个字母的地址
        len++;//自然长度应该+1
    }
    return len;//返回长度
}
int main(int argc, char** argv){
    printf("len = %d\n", getStrLen("hello "));//打印字符串"hello  "的长度为7，因为后面有两个空格
    return 0;
}