# -C dir读入指定目录下的Makefile
# -f  file读入当前目录下的file文件作为Makefile
# -i忽略所有的命令执行错误
# -I dir指定被包含的Makefile所在目录
# -n只打印要执行的命令，但不执行这些命令
# -p显示make变量数据库和隐含规则	
# -s在执行命令时不显示命令
# -w如果make在执行过程中改变目录，打印当前目录名
CC = gcc #定义CC为gcc
OBJS = calculationUse.o tools.o calculation.o
OBJ = calculationUse
CFLAGS = -Wall -O -g
VPATH = calculation:utils
INCLUDE = -lm
$(OBJ):$(OBJS)
	$(CC) $^ -o $@	$(INCLUDE)
#上面一段可以不用写,利用了makefile的隐含规则,不过使用隐含规则的时候要源文件名和依赖中任何一个文件的名字相关联才行
calculationUse.o:calculationUse.c
	$(CC) -c $< $(CFLAGS)  -o $@ 
#上面一段可以不用写,利用了makefile的隐含规则
calculation/calculation.o:calculation.c 
	$(CC) -c $< $(CFLAGS)  -o $@ 
utils/tools.o:tools.c 
	$(CC) -c $< $(CFLAGS)  -o $@ 

.PHONY:clean
clean:
	@find ./ -name "*.o" -type f -print -exec rm {} \;;rm $(OBJ)
#加一个@表示不用打印这一段命令
