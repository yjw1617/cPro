#include <pthread.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>

typedef struct File{
    pthread_rwlock_t rwlock;//读写锁
    FILE* fp;//文件句柄
}File;
void* readTask(void* param){
    pthread_detach(pthread_self());
    //读文件
    File* file = (File*)param;
    
    //存文件内容buff
    char buf[10] = {0};
    char* ret;
    for(;;){
        sleep(5);
        //将文件指针指向开头
        fseek(file->fp, 0, SEEK_SET);
        pthread_rwlock_rdlock(&file->rwlock);
        if(fgets(buf, 10, file->fp) == NULL){
            perror;
        }
        printf("read buf = %s\n", buf);
        pthread_rwlock_unlock(&file->rwlock);
    }
    pthread_exit(0);
}

void* writeTask(void* param){
    pthread_detach(pthread_self());
    File* file = (File*)param;
    char w_buf[] = "hello\n";
    //将文件指针指向开头
    fseek(file->fp, 0, SEEK_SET);
    for(;;){
        pthread_rwlock_wrlock(&file->rwlock);
        for(int i = 0; i < strlen(w_buf); i++){
            fputc(w_buf[i], file->fp);
        }
        pthread_rwlock_unlock(&file->rwlock);
        sleep(5);
    }
    pthread_exit(0);
}
int main(){
    pthread_t tid1, tid2, tid3;
    File file = {0};
    file.fp = fopen("test.txt", "w+");
    pthread_rwlock_init(&file.rwlock, NULL);//初始化读写锁
    pthread_create(&tid1, NULL, readTask, &file);
    pthread_create(&tid2, NULL, writeTask, &file);
    pthread_create(&tid3, NULL, writeTask, &file);
    pthread_join(tid1, NULL);
    pthread_join(tid2, NULL);
    pthread_join(tid3, NULL);
    pthread_rwlock_destroy(&file.rwlock);
    fclose(file.fp);
    return 0;
}