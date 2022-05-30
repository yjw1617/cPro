#include <stdio.h>
#include <stdlib.h>
typedef struct{
    char name[20];
    int age;
}Student;
int main(int argc, char** argv){
    Student stu1 = {"yjw", 22};
    Student stu2 = stu1;
    printf("%s    %d\n", stu1.name, stu1.age);
    printf("%s    %d\n", stu2.name, stu2.age);
    stu1.name[0] = 'k';
    printf("%s    %d\n", stu1.name, stu1.age);
    printf("%s    %d\n", stu2.name, stu2.age);
    return 0;
}