/*
函数定义:void StrCat(char* headChar, char* tailChar)
函数参数:
headChar:需要拼接的字符串首地址
tailChar:拼接内容字符串的首地址
功能:拼接字符串
*/ 

#include <stdio.h>
char* chang(){
    char a[] = "dasd";
    return a;
}
void StrCat(char* headChar,const char* tailChar){
    char* tempChar = headChar;//用tempChar来修改地址的值,这样headChar还是指向字符串的首地址
    while(*tempChar){//如果当前指针指向的值不为0的话,就进入while
        tempChar++;//将tempChar++，移动到指针的下一位
    }
    /* 到此处指针是指向字符串中第一处没有值的地方  比如一个字符串为"hello"
    可以理解为此时指针指向的地方为o字母后面的一个地址,根本没有值,相当于0.
    我们只需要将从这一位开始到之后填成tailChar字符串的值就行*/
    while(*tailChar){//如果tailChar指向地址的值不等于0,则进入while
        *tempChar = *tailChar;//将tailChar的值给tempChar
        tempChar++;
        tailChar++;
    }
    //到这里字符串已经拼接完成
    //可以直接通过字符串的首地址打印出字符串
    printf("%s\n",headChar);//这段只能通过首地址打印,这个过程一般是省略的,写出来更好理解而已
}
int main(int argc, char** argv){
    char a[20] = "hello ";//这个字符串的大小一定要够存需要拼接的字符串的大小
    // StrCat(a, "world!");//将a的首地址当实参传进了函数,并且在函数里面通过一个中间指针改变了字符串的值
    // 将"hello "和"world!"进行拼接成"hello world!"
    // printf("%s\n", a);                    // 所以我们直接通过首地址就可以打印出拼接过后的字符串
    char* b= chang();
    printf("%s\n", b++);
    return 0;
}