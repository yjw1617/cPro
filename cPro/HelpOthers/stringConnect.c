#include <stdio.h>
char* get_strcat(char* dest, const char* src){
	char* r = dest;
	while(*dest){
		printf("dest = %c ,ptr =  %p\n", *dest,dest);
		dest++;
	}
	while(*src){
		*dest = *src;
		printf("dest_ptr = %p , dest_vaule = %c     , src_ptr = %p,    src_vaule = %c\n", dest,*dest,src ,*src);
		dest++;
		src++;
	}

	*dest = *src;
	return r;
}
int main(int argc, char* argv[]){
	char a[20] = "hello";
	char* b = "";
	b = get_strcat(a, "nihao"); 
	printf("%s\n",b);
	return 0;
}
