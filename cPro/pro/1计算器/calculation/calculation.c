//函数split(char* s,const char* const o)实现大致思路如下:const char* const o 看成 char* o就行
//1.将s进行第一次遍历,如果指定符号如 . 出现x次,那就从堆上分配 x + 1个字符串指针大小的二重指针
//2.对s进行第二次遍历,给二重指针指向的地址初始化
//3.对s进行第三次遍历,给二重指针指向的指针指向的值赋值
#include <stdio.h>
// #include <stdlib.h>
// #include "calculation.h"
#include <math.h>
double add(double a, double b){
	return a + b;
}

double sub(double a, double b){
	return a - b;
}
double multiplication(double a, double b){
	return a * b;
}
double divide(double a, double b){
	return a / b;
}
double getPow(double a, double b){
	return pow(a, b);
}
double get_D(double a){
	return 1.0 / a;
}
double get_Sin(double a){
	return sin(a);
}
double get_Cos(double a){
	return cos(a);
}
double get_Sqrt1(double a){
	return sqrt(a);
}

void caculationHelp(){
	printf("格式如下:\n");
	printf("a乘b:a*b\n");
	printf("a加b:a+b\n");
	printf("a除b:a/b\n");
	printf("a的b次方:a^b\n");
	printf("a的倒数:ad\n");
	printf("求sin(a):as\n");
	printf("求cos(a):ac\n");
	printf("求a的平方根:aq\n");
	printf("输入@相当于上一次计算的结果,@只能输入在第一位\n");
}
//	printf("%d + %d = %d\n", atoi(new[0]), atoi(new[1]), atoi(new[0]) + atoi(new[1]));	
	

