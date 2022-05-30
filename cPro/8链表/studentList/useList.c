#include <stdio.h>
#include <string.h>
#include "./inputAndreturnCode/input.h"
#include "./inputAndreturnCode/return.h"
#include "./view/view.h"
SelectFlag selectFlag;//创建一个选项枚举
int main(int argc, char** argv){
    link* head = NULL;
    init_link(&head);//初始化一个清单头
    char Name[10] = {};//接受用户输入的名字
    int age = 0;//接受用户输入的年龄
    int score = 0;//接受用户输入的分数
    view_for_topic();//主界面
    while(1){
        view_for_select(&selectFlag);//选择界面,将用户的选择给selectFlag
        switch(selectFlag){
            case ADD:
                view_for_add(head, Name, &age, &score);
                break;
            case DELETE:
                view_for_delet(head, Name);
                break;
            case SHOW:
                view_for_show(head);
                break;
            case MODIFY:
                view_for_modify(head, Name);
                break;
            case QUIT:
                goto end;
                break;
            default:
                break;
        }
    }
end:
    free(head);
    return 0;
}