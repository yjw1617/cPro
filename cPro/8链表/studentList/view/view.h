#ifndef _VIEW_H
#define _VIEW_H
#include "../list/list.h"
void view_for_topic();
void view_for_select(void* selectFlag);
void view_for_add(link* head, char* Name, int* age, int* score);
void view_for_delet(link* head, char* Name);
void view_for_show(const link* showTemp);
void view_for_modify(link* head, char* Name);
#endif