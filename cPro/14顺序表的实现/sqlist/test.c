#include "sqlist.h"
#include <stdio.h>
int main(int agec, char** argv){
    Student stu1 = {"yjw", 21, 99};
    Student stu2 = {"liling", 20, 98};
    sqlink sq = list_create();
    list_insert(sq, stu1, 0);
    list_insert(sq, stu2, 1);
    // printf("%d\n", list_length(sq));
    // list_length(sq);
    list_show(sq);
}