#include <pthread.h>
#include <stdio.h>
#include <unistd.h>
#include <string.h>
void* helloTask(void* param){
    pthread_detach(pthread_self());
    sleep(1);
    printf("rec msg = %d\n", (int*)param);
    printf("hello world\n");
    pthread_exit("helloTask exit");
}
int main(){
    pthread_t tid1;
    void* ret;
    pthread_create(&tid1, NULL, helloTask, (void*)3);//传递参数
    pthread_join(tid1, &ret);//这里如果传void*就不能够改变ret的值,所以这里传了双重指针
    printf("ret = %s\n", (char*)ret);
    return 0;
}