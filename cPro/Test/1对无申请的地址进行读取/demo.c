#include <stdio.h>
#include <unistd.h>
int main(int argc, char* argv[]){
	char* c = ""; 
	unsigned int i = 0;
	while(1){
		printf("%s\n", (&c + i));	
		i += 8;
	} 
}
