#include <pthread.h>
#include <stdio.h>
#include <unistd.h>
#include <string.h>

//如果传地址有缺点  就是如果别的线程在被传线程使用传递参数之前改变了那就不行了   只有一个进程的程序传地址没有这样的烦恼
void* helloTask(void* param){
    pthread_detach(pthread_self());
    for(;;){
        sleep(5);
        printf("hello\n");
    }    
    pthread_exit("helloTask exit");
}

void* areTask(void* param){
    pthread_detach(pthread_self());
    for(;;){
        sleep(5);
        printf("are\n");
    }    
    pthread_exit("are exit");
}
int main(){
    pthread_t tid1, tid2;
    void* ret;
    pthread_create(&tid1, NULL, helloTask, NULL);
    pthread_create(&tid2, NULL, areTask, NULL);
    pthread_join(tid1, &ret);
    pthread_join(tid2, &ret);
    printf("ret = %s\n", (char*)ret);
    return 0;
}