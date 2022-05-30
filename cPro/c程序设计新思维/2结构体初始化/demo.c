#include <stdio.h>
typedef struct{
    int age;
    int grades;
}Student;
int main(){
    Student stu = {.age = 20, .grades = 100};
    printf("%d  %d\n", stu.age, stu.grades);
    return 0;

}