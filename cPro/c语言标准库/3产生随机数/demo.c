#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int main(int argc, char** argv){
	int i, n;   
	time_t t;
   
	n = 5;
   
   /* 初始化随机数发生器 */
	srand((unsigned) time(&t));
 
   /* 输出 0 到 50 之间的 5 个随机数 */
	for( i = 0 ; i < n ; i++ ) {
    		printf("%d\n", rand() % 50);
	}
   
	return(0);
}
