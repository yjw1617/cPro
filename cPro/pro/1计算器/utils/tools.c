#include <stdio.h>
#include <stdlib.h>
char** split(char* s, char o){
	int num = 0;//记录.出现的个数
	int index = 0;
	char* temp1 = s;
	char* temp2 = s;
	char* temp3 = s;
	//遍历看一下s中有多少个.
	while(*temp1){
		if(*temp1 == o){
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
		if(*temp2 == o){
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
		if(*temp3 == o){
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

//寻找第一个关系符号
char get_symbol(char* str){
    while(*str){
        if(*str == '-' || *str == '*' || *str == '+' || *str == '/' || *str == '^' || *str == 'd' || *str == 's' || *str == 'c' || *str == 'q'){
            return *str;
        }
        str++;
    }
    printf("cant find symbol\n");
    return '\0';
}

char** split_free(char ** s){
    //释放内存
	int i = 0;
	while(s[i]){//释放二级指针指向的一级指针
		free(s[i]);
		i++;
	}
    return NULL;
}
