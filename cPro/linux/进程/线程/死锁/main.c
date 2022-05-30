#include <pthread.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>

pthread_mutex_t lock1, lock2;
void* readTask(void* param){
    pthread_detach(pthread_self());
    for(;;){
        pthread_mutex_lock(&lock1);
        // sleep(1);死锁
        pthread_mutex_lock(&lock2);
        printf("readTask\n");
        pthread_mutex_unlock(&lock1);
        pthread_mutex_unlock(&lock2);
        sleep(1);
    }
    pthread_exit(0);
}

void* writeTask(void* param){
    pthread_detach(pthread_self());
    for(;;){
        pthread_mutex_lock(&lock2);
        pthread_mutex_lock(&lock1);
        printf("writeTask\n");
        pthread_mutex_unlock(&lock2);
        pthread_mutex_unlock(&lock1);
        sleep(1);
    }
    pthread_exit(0);
}
int main(){
    pthread_t tid1, tid2;

    pthread_mutex_init(&lock1, NULL);
    pthread_mutex_init(&lock1, NULL);
    pthread_create(&tid1, NULL, readTask, NULL);
    pthread_create(&tid2, NULL, writeTask, NULL);
    pthread_join(tid1, NULL);
    pthread_join(tid2, NULL);
    pthread_mutex_destroy(&lock1);
    pthread_mutex_destroy(&lock2);
    return 0;
}