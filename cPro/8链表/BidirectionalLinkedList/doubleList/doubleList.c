#include "doubleList.h"
#include <stdio.h>
#include <stdlib.h>
doubleLine* init_dbLine(){
    doubleLine* head = NULL;
    head=(doubleLine*)calloc(1, sizeof(doubleLine));//创建链表第一个结点（首元结点）
    head->prior = NULL;
    head->next = NULL;
    head->data = 0;    
    return head;
}

int insert_dbLine(doubleLine* list, data_t data){
    doubleLine* temp = list;
    if(list == NULL){
        printf("list is null\n");
        return -1;
    }
    //创建一个新的节点
    doubleLine* new = (doubleLine*)calloc(1, sizeof(doubleLine));
    new->prior = NULL;
    new->next = NULL;
    new->data = data;
    //正向遍历到为尾节点
    while(temp->next != NULL){
        temp = temp->next;
    }
    //此时temp算是尾节点
    temp->next = new;
    new->prior = temp;
    new->next = NULL;
    return 0;
}

int show_dbLine_pos(doubleLine* list){
    doubleLine* temp = list;
    if(list == NULL){
        printf("list is null, show failed\n");
        return -1;
    }
    while(temp->next != NULL){
        printf("read data = %d\n", temp->next->data);
        temp = temp->next;
    }
    return 0;
}

int show_dbLine_neg(doubleLine* list){
    doubleLine* temp = list;
    if(list == NULL){
        printf("list is null, show failed\n");
        return -1;
    }
    while(temp->next != NULL){
        temp = temp->next;
    }
    //此时遍历到结尾,然后从尾巴往头接点开始遍历
    while(temp != NULL && temp != list){
        printf("read data = %d\n", temp->data);
        temp = temp->prior;
    }
    return 0;
}
