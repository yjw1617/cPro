#include <stdio.h>
int strncmp(const char *str1, const char *str2, size_t n){
    if(n == 0){//如果n=0 那么就不能做比较,返回-2提示输入长度错误
        return -2;
    }
    for(int i = 0; i < n ; i++){
        if(str1[i] != str2[i]){
            // 如果两个字符不相同,就比较大小
            return str1[i] > str2[i] ? 1 : -1;
        }
    }
    return 0;//如果两个字符相等返回0;
}
int main(int argc, char** argv){
    char a[] = "   a";
    char b[] = " ";
    int err = strncmp(a, b, 5);//接受返回值
    switch(err){
        case -2:
            printf("请输入正确的比较长度\n");
            break;
        
        case -1:
            printf("a < b\n");
            break;
        
        case 0:
            printf("a = b\n");
            break;
        
        case 1:
            printf("a > b\n");
            break;
        
        default:
            printf("err\n");
            break;
    } 
    return 0;
}