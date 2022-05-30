#include <stdio.h>
int all = 1;
void getNum(int num){
	all *= num;
	num--;
	if(num == 0){
		printf("%d\n", all);
		return;
	}	
	getNum(num);
}
int main(int argc, char* argv[]){
	getNum(3);
	return 0;
}
