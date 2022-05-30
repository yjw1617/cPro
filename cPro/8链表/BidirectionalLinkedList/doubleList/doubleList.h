#ifndef DOUBLELIST_H
#define DOUBLELIST_H
typedef int data_t; 
typedef struct line{
    struct line* prior;//指向前一个节点
    data_t data;
    struct line* next;//指向下一个节点
}doubleLine;

int show_dbLine_neg(doubleLine* list);

int show_dbLine_pos(doubleLine* list);

int insert_dbLine(doubleLine* list, data_t data);

doubleLine* init_dbLine();
#endif