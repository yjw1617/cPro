#include <stdio.h>
#include <stdlib.h>
typedef struct Node{
    int data;
    struct Node* next;
}node, *nodelink;

nodelink list_create(){
    nodelink h = (nodelink)calloc(1, sizeof(node));
    if(h == NULL){
        printf("create link failed\n");
        return NULL;
    }
    return h;
}

int list_tail_insert(nodelink h, int value){
    nodelink temp = h;
    if(h == NULL){
        printf("h is null\n");
        return -1;
    }
    nodelink new = (nodelink)calloc(1, sizeof(node));
    new->data = value;
    new->next = NULL;
    while(temp->next){
        temp = temp->next;
    }
    temp->next = new;
    return 0;
}

nodelink move_to_pos(nodelink h, int pos){
    for(int i = 0; i < pos + 1; i++){
        h = h->next;
    }
    return h;
}

int list_insert(nodelink h, int pos, int value){
    nodelink temp = h;
    if(h == NULL){
        printf("h is null\n");
        return -1;       
    }
    nodelink new = (nodelink)calloc(1, sizeof(nodelink));
    new->data = value;

    nodelink prenode = move_to_pos(h, pos - 1);
    temp = prenode->next;

    new->next = prenode->next;
    prenode->next = new;


    return 0;
}

int list_delet(nodelink h, int pos){
    nodelink temp = h;
    if(h == NULL){
        printf("h is null\n");
        return -1;       
    }
    
    nodelink prenode = move_to_pos(h, pos - 1);
    temp = prenode->next;
    if(prenode->next){
        prenode->next = prenode->next->next;
    }else{
        printf("list is null\n");
    }

    free(temp);
    temp = NULL;
    return 0;
}
void list_show(nodelink h){
    if(h == NULL){
        printf("list is null\n");
        return;
    }    
    while(h->next){
        printf("value = %d\n", h->next->data);
        h = h->next;
    }
    return;
}

int main(int argc, char** argv){
    nodelink h = list_create();
    list_tail_insert(h, 10);
    list_tail_insert(h, 10);
    list_tail_insert(h, 10);
    list_insert(h, 0, 100);
    list_show(h);
    list_delet(h,0);
    list_delet(h,0);
    list_delet(h,0);
    list_delet(h,0);
    list_delet(h,0);
    printf("_____________\n");
    list_show(h);
    return 0;
}