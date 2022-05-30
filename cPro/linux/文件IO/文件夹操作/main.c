#include <sys/types.h>
#include <dirent.h>
#include <unistd.h>
#include <stdio.h>
int main(){
    DIR* dir;
    struct dirent* dirt;
    dir = opendir("/home/makeru/cPro/linux/文件IO");
    if(dir == NULL){
        perror("opendir");
        return -1;
    }

    while((dirt = readdir(dir)) != NULL){
        printf("dirname = %s\n", dirt->d_name);
        printf("%ld\n", dirt->d_ino);
    }


    closedir(dir);
}