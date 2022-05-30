#include<stdio.h>
#include<stdlib.h>
#include<signal.h>
//IGABRT	(Signal Abort) 程序异常终止。
//SIGFPE	(Signal Floating-Point Exception) 算术运算出错，如除数为 0 或溢出（不一定是浮点运算）。
//SIGILL	(Signal Illegal Instruction) 非法函数映象，如非法指令，通常是由于代码中的某个变体或者尝试执行数据导致的。
//SIGINT	(Signal Interrupt) 中断信号，如 ctrl-C，通常由用户生成。
//SIGSEGV	(Signal Segmentation Violation) 非法访问存储器，如访问不存在的内存单元。
//SIGTERM	(Signal Terminate) 发送给本程序的终止请求信号。
void signal_catchfunc(int);


void handle(int a){
	printf("value = %d\n", a);
}
int main() {
   int ret;

   signal(SIGINT, signal_catchfunc);


   printf("开始生成一个信号\n");
   ret = raise(SIGINT);
   if (ret != 0) {
      printf("错误，不能生成SIGINT信号\n");
      exit(0);
}

printf("退出....\n");
   return 0;
}

void signal_catchfunc(int signal) {
   printf("捕获信号%d\n", signal);
}


