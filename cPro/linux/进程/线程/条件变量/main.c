#include <stdio.h>
#include <unistd.h>
#include <pthread.h>

int main(){
    pthread_mutex_t lock;
    pthread_mutex_init(&lock, NULL);
    pthread_cond_t cont;
    pthread_cond_init(&cont, NULL);

    pthread_cond_signal(&cont);
    pthread_cond_wait(&cont, &lock);
    return 0;
}