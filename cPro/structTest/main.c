#include <stdio.h>
typedef struct{
    // char* name;//64bit has 8bytes
    int age;
    int grade;
    double kk;
    int skill;
}Student;

int main(int argc, char* argv[]){
    // *(unsigned long*)0x3333333377777777 = 100;
    Student stu;
    Student* stuPtr;
    stuPtr = (Student*)0x33;
    stuPtr->age = 10;
    printf("stuPtrAddr.age = %d\n", stuPtr->age);
    printf("stuPtrAddr.age = %x\n", &stuPtr->age);
    printf("stuPtrAddr.grade = %x\n", &stuPtr->grade);
    printf("stuPtrAddr.kk = %x\n", &stuPtr->kk);
    printf("stuPtrAddr.skill = %x\n", &stuPtr->skill);
    return 0;
}
