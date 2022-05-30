#include <stdio.h>
#include <string.h>

int main(){
    int a,b;
    char c[20];
    char* buf = "3 4 hello";
    sscanf(buf, "%d %d %s", &a, &b, c);
    printf("read = %d %d %s\n", a, b, c);


    FILE* fp;
    fp = fopen("test.txt", "w+");
    if(fwrite("56 6 helloworld", strlen("3 4 helloworld"), 1, fp) < 0){
        perror("fwrite");
        return -1;
    } 
    rewind(fp);
    fscanf(fp, "%d %d %s", &a, &b, c);
    printf("read = %d %d %s\n", a, b, c);
    fclose(fp);
    return 0;
}