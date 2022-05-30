#include <stdio.h>
int add(int m){
	int i, n = 0;
	for(i = 1; i <= m; i++){
		n += i;	
	}
	printf("sum is %05d\n",n);
	return n;
}
int main(int argc, char* argv[]){
	add(100);
	return 0;
}
