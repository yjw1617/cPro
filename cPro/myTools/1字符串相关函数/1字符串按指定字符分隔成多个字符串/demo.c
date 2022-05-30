//函数split(char* s,const char* const o)实现大致思路如下:const char* const o 看成 char* o就行
//1.将s进行第一次遍历,如果指定符号如 . 出现x次,那就从堆上分配 x + 1个字符串指针大小的二重指针
//2.对s进行第二次遍历,给二重指针指向的地址初始化
//3.对s进行第三次遍历,给二重指针指向的指针指向的值赋值
#include <stdio.h>
#include <stdlib.h>
char** split(char* s, const char* const o){
	int num = 0;//记录.出现的个数
	int index = 0;
	char* temp1 = s;
	char* temp2 = s;
	char* temp3 = s;
	//遍历看一下s中有多少个.
	while(*temp1){
		if(*temp1 == *o){
			num++;
		}
		temp1++;
	}
	//创建带有num+1个指针的数组
	char** numFlagArrys = (char**)calloc(num + 2,sizeof(char*));
	numFlagArrys[num + 1] = NULL;
	int i = 0;
	//再次遍历一下s,将上面创建的指针指向内存的大小
	while(*temp2){
		if(*temp2 == *o){
			i++;
			numFlagArrys[i-1] = (char*)calloc(index + 2, sizeof(char));
			index = -1;				
		}
		index++;
		temp2++;
	}
	numFlagArrys[i] = (char*)calloc(index + 2, sizeof(char));
	i = 0;
	index = 0;
	//再一次遍历s,指针数组的每一个指针所指的地址赋值
	while(*temp3){
		if(*temp3 == *o){
			numFlagArrys[i][index] = '\0';
			i++;
			index = -1;				
		}else{
			numFlagArrys[i][index] = *temp3;
		}
		index++;
		temp3++;
	}
	numFlagArrys[i][index] = '\0';
	return numFlagArrys;
}
int main(int argc, char** argv){
	int i = 0;
	char s[100]; 
	char q[2];	
	printf("请输入一个字符串:\n");
	scanf("%s", s);
	getchar();
	printf("请输入一个分隔符:\n");
	scanf("%s", q);
	getchar();
	char** new = split(s, q);
	while(new[i]){
		printf("%s\n", new[i]);
		i++;
	}
//	printf("%d + %d = %d\n", atoi(new[0]), atoi(new[1]), atoi(new[0]) + atoi(new[1]));	
	//释放内存
	i = 0;
	while(new[i]){//释放二级指针指向的一级指针
		free(new[i]);
		i++;
	}
	free(new);//释放二级指针
	return 0;
}
