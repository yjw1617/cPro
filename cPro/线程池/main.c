#include <stdio.h>
#include <unistd.h>
#include <pthread.h>

//任务列表
typedef struct Task{
    void*(*func)(void* arg);//任务函数
    void* arg;//任务参数
    struct Task* next;//下一个任务节点
}Task;

//线程池
typedef struct ThreadPool{
    int process_num;//线程数目
    Task* head_task;//任务头接点
    pthread_cond_t newTask;//条件变量
    pthread_mutex_t Lock;//互斥锁
}ThreadPool;