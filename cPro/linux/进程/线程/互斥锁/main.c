#include <pthread.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>
pthread_mutex_t mutex = PTHREAD_MUTEX_INITIALIZER;//静态方式创建锁
void* helloTask(void* param){
    pthread_detach(pthread_self());
    int i = 0;
    char hello[] = "hello";
    while(1){
        pthread_mutex_lock((pthread_mutex_t*)param);
        for(i = 0; i < strlen(hello); i++){
            putchar(hello[i]);   
            usleep(1); 
        }
        printf(" ");
        pthread_mutex_unlock((pthread_mutex_t*)param);
        usleep(10000);
    }
}


int main(){
    pthread_t tid1, tid2;
    pthread_mutex_t lock;
    int ret = pthread_mutex_init(&lock, NULL);
    if(ret < 0){
        perror("pthread_mutex_init");
        return -1;
    }

    pthread_create(&tid1, NULL, helloTask, &lock);
    pthread_create(&tid2, NULL, helloTask, &lock);

    while(1){}
    pthread_mutex_destroy(&lock);
    return 0;
}