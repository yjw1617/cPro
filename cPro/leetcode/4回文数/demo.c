// 给你一个整数 x ，如果 x 是一个回文整数，返回 true(1) ；否则，返回 false(0) 。
// 回文数是指正序（从左向右）和倒序（从右向左）读都是一样的整数。例如，121 是回文，而 123 不是。

#include <stdio.h>
typedef char bool;
bool isPalindrome(int x){
    int y = x;
    int value = 0;
    if(x < 0){
        return 0;
    }
    while(x > 0){
        value = value * 10 + x % 10;
        x /= 10;
    }
    if(value == y){
        return 1;
    }
    return 0;
}
int main(int argc, char** argv){
    printf("%d  \n", isPalindrome(123));
}
