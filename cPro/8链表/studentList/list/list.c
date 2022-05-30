#include "list.h"
int init_link(link** lin){
    link* new = (link*)calloc(1, sizeof(link));//头节点
    if(!new){//出现错误
        return -1;
    }
    *lin = new;
    (*lin)->next = NULL;
    return 0;
}
void addStudent(link* head, char* name, int age, int score){
    link* temp = head;//跑龙套的ls指针
    while(temp->next){//有该节点
        if(!strcmp(temp->next->name, name)){
            //已经有该name
            printf("%s已经存在\n", name);
            return;
        }
        if(temp->next){
            temp = temp->next;
        }
    }
    // 此刻的temp指向链表的尾巴
    // 没有在链表中找到该name,则添加一个name
    temp->next = (link*)calloc(1, sizeof(link));
    temp->next->name = (char*)calloc(1, sizeof(strlen(name) + 1));
    temp->next->age = age;
    temp->next->score = score;
    temp->next->next = NULL;//将为节点设置成NULL
    strcpy(temp->next->name, name);
    printf("恭喜添加成功!\n");
    puts("");
    puts("");
    puts("");
    puts("");
    return;
}
void delStudent(link* head, char* name){
    link* temp = head;
    while(temp->next){//遍历一遍,如果有name
        if(!strcmp(temp->next->name, name)){
            //如果有
            // 将其删除
            if(temp->next->next == NULL){
                free(temp->next);
                temp->next = NULL;
            }else{
                free(temp->next);
                temp->next = temp->next->next;
            }
            printf("删除%s成功!\n", name);
            return;
            // temp->next = temp->next
        }
        //如果没有找到该name
        printf("没有找到%s,删除失败!\n", name);
        return;
    }
    printf("没有找到%s,删除失败!\n", name);
    return;
}

void modifyStudent(link* head, char* name){
    link* temp = head;
    if(!temp->next){
        //如果为头接点
        printf("没有找到%s,修改失败!\n", name);
        return;
    }
    while(temp->next){
        if(!strcmp(temp->next->name, name)){
            //如果找到该值
            printf("请输入修改之后的名字,年龄,分数,以空格隔开:\n");
            if(scanf("%s %d %d", temp->next->name, &temp->next->age, &temp->next->score) <= 0){
                printf("receive error!\n");
                return;
            }
            getchar();
            printf("恭喜修改成功!\n");
            return;
        }
        if(temp->next){
            temp = temp->next;
        }
    }
    printf("没有找到%s,修改失败\n", name);
}
void showStudent(const link* showTemp){
    printf("%s%30s%30s\n","age", "name", "scored");
    // 遍历链表中的age
    while(showTemp->next){
        printf("%s%30d%30d\n", showTemp->next->name, showTemp->next->age, showTemp->next->score);
        showTemp = showTemp->next;
    }
}
