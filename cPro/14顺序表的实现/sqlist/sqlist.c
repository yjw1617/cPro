#include "sqlist.h"
#include <stdlib.h>
#include <stdio.h>
sqlink list_create(){
    sqlink L = (sqlink)calloc(1, sizeof(sqlist));
    if(L == NULL){
        printf("list_create error!\n");
        return NULL;
    }
    L->last = -1;
    return L;
}
int list_insert(sqlink L, data_t vaule, int pos){
    // 判断L是否为NULL
    if(L == NULL){
        printf("L is wrong, please input agin\n");
        return -1;
    }
    // 判断L是否已经到达最大长度
    if(L->last >= N -1){
        printf("the list is full\n");
        return -1;
    }
    // 判断插入的pos和表的大小比较
    if(pos < 0 || pos > L->last + 1){
        printf("pos is out range\n");
        return -1;
    }
    // 进行插入
    for(int i = L->last; i >= pos; i--){
        L->data[i + 1] = L->data[i];//这里应该是一个浅拷贝,等会验证一下
        // L->data->age = vaule.age;
        // L->data->scored = vaule.scored;
        // for(int i = 0; i < sizeof(L->data->name); i++){
        //     L->data->name[i] = vaule.name[i];
        // }
    }
    // 替换
    L->data[pos] = vaule;
    L->last++;
    return 0;
}

int list_length(sqlink L){
    if(L == NULL){
        printf("get len error\n");
        return -1;
    }
    if(L->last < -1){
        printf("len is error!\n");
        return 0;
    }
    return L->last + 1;
}

int list_show(sqlink L){
    if(L == NULL){
        printf("list show error!\n");
        return -1;
    }
    for(int i = 0; i <= L->last; i++){
        printf("%s %d %d\n", L->data[i].name, L->data[i].age, L->data[i].scored);
    }
    puts("");
    return 0;
}