#include <stdio.h>
typedef struct{
    char name[10];
    int age;
}Student;
int main(){
    Student stu1 = {"yangjiawei", 20};
    Student stu2 = {"lili", 21};
    printf("%s  %d \n", stu1.name, stu1.age);
    printf("%s  %d \n", stu2.name, stu2.age);
    stu1 = stu2;
    printf("%s  %d \n", stu1.name, stu1.age);
    printf("%s  %d \n", stu2.name, stu2.age);
    stu1.name[0] = 'k';
    printf("%s  %d \n", stu1.name, stu1.age);
    printf("%s  %d \n", stu2.name, stu2.age);
}