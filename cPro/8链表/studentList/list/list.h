#ifndef _LIST_H
#define _LIST_H
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct Link{
    char* name;
    int age;
    int score;
    struct Link* next;
}link;
int init_link(link** lin);        
void addStudent(link* head, char* name, int age, int score);
void delStudent(link* head, char* name);
void modifyStudent(link* head, char* name);
void showStudent(const link* showTemp);
#endif