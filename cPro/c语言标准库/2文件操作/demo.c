#include <stdio.h>
int main(int argc, char** argv){
	char b[] = "hello world!\n";
	char c[20];
	FILE* file = fopen("./hello.txt", "w+");
	if(file == NULL){
		printf("openfile error!\n");
		return -1;
	}
	size_t len = fwrite(b, sizeof(char), sizeof(b), file);
	if(len != sizeof(b)){
		printf("write file error!\n");
		return -1;	
	}
	fseek(file, 0, SEEK_SET);
	fread(c, sizeof(char), sizeof(c), file);
	printf("= %s\n", c);
	fclose(file);
	return 0;
}
