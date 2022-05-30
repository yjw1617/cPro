#include <stdio.h>
#include <unistd.h>
int main(){
	sleep(10);
	int ret = execl("/home/makeru/cPro/linux/进程/fork/fork", "fork", NULL);
	if(ret < 0){
		perror("execl");
		return -1;
	}
	return 0;
}
