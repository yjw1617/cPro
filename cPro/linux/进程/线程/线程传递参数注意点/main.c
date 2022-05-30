#include <pthread.h>
#include <stdio.h>
#include <unistd.h>
#include <string.h>

//如果传地址有缺点  就是如果别的线程在被传线程使用传递参数之前改变了那就不行了   只有一个进程的程序传地址没有这样的烦恼
void* helloTask(void* param){
    pthread_detach(pthread_self());
    sleep(10);
    printf("rec msg = %d\n", *(int*)param);//这里接收到的是20
    printf("hello world\n");
    pthread_exit("helloTask exit");
}
int main(){
    int param = 10;
    pthread_t tid1;
    void* ret;
    pthread_create(&tid1, NULL, helloTask, &param);//这里想传递10,
    param = 20;//这里将值改为20
    pthread_join(tid1, &ret);//这里如果传void*就不能够改变ret的值,所以这里传了双重指针    阻塞函数
    printf("ret = %s\n", (char*)ret);
    return 0;
}