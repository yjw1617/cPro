#ifndef _SQLIST_H
#define _SQLIST_H
#define N 100
typedef struct{
    char name[10];
    int age;
    int scored;
}Student;
typedef Student data_t;
typedef struct{
    data_t data[N];
    int last;
}sqlist, *sqlink;
sqlink list_create();
int list_insert(sqlink L, data_t vaule, int pos);
int list_show(sqlink L);
int list_delete();
int list_empty();
int list_length(sqlink L);
#endif