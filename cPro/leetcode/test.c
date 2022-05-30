#include <stdio.h>
#include <math.h>
int main(int argc, char** argv){
	int i = 0;
	int j = 0;
	while(1){
		for(j = i; j <= i + 13; j++){
			if(pow(j,2) - pow(i,2) == 168){
				printf("value = %d\n", i*i - 100);
			}
			if(pow(i + 1,2) - pow(i,2) > 168){
                        return 0;
	                }

		}
		i++;
	}
}
