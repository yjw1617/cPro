#include <stdio.h>
#include "view.h"
void view_for_topic(){
    printf("-----------------欢迎来到学生清单记录系统------------------\n");
}
void view_for_select(void* selectFlag){
    printf("请输入(0为添加学生,1为删除学生,2为显示学生清单,3为修改学生名字,4为退出):\n");
    if (scanf("%d", (int*)selectFlag) <= 0){
        printf("view_for_select error!\n");
        return ;
    }
    getchar();//消除回车
}
void view_for_add(link* head, char* Name, int* age, int* score){
    printf("请输入需要添加学生姓名,年龄,分数,以空格隔开:\n");
    scanf("%s %d %d", Name, &age, &score);
    getchar();
    // printf("%s\n", Name);
    addStudent(head, Name, age, score);
    puts("");
    puts("");
    puts("");
    puts("");
}
void view_for_delet(link* head, char* Name){
    printf("请输入需要删除学生姓名:\n");
    scanf("%s", Name);
    getchar();
    delStudent(head, Name);
    puts("");
    puts("");
    puts("");
    puts("");
}

void view_for_show(const link* head){
    printf("学生清单如下:\n");
    showStudent(head);
    puts("");
    puts("");
    puts("");
    puts("");
}

void view_for_modify(link* head, char* Name){
    printf("请输入需要修改学生姓名:\n");
    scanf("%s", Name);
    getchar();
    modifyStudent(head, Name);
    puts("");
    puts("");
    puts("");
    puts("");
}

