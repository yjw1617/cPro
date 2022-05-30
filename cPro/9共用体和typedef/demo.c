#include <stdio.h>
typedef union{
    char b;
    int a;
}UN;
typedef struct{
    char a;
    int b;
}Student, *Stu;//定义Student和Student的指针结构
int main(int argc, char** argv){
    UN nu1;
    Student stu1;
    nu1.a = 0x123456;
    printf("%ld\n", sizeof(nu1));
    printf("%#x\n", nu1.a);
    printf("%#x\n", nu1.b);   
    printf("%ld\n", sizeof(Student));
    return 0;
}