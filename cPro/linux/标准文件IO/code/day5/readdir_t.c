#include <dirent.h>
#include <stdio.h>
int main(int argc,char **argv){

    DIR* dp;
    struct dirent *dt;
    dp=opendir("/mnt/hgfs/share/newIOP/");
    if(dp<0){
        perror("opendir");
        return 0;
    }
    
    while((dt=readdir(dp))!=NULL){
       printf("%s\n",dt->d_name);
    }
    

    closedir(dp);



}
