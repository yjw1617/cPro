#include <string.h>
#include <stdio.h>
typedef struct Stu{
    char name[20];
    int age;
}Stu;
int main(){
    Stu stu1 = {
        .age = 20,
        .name = "yjw",
    };
    Stu stu2;
    memcpy(&stu2, &stu1, sizeof(Stu));
    printf("%s\n", stu1.name);
    strcpy(stu2.name, "gg");
    printf("%s\n", stu2.name);
    printf("%s\n", stu1.name);
    return 0;
}