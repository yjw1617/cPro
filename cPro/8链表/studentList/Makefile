CC = gcc
OBJS = useList.o list/list.o view/view.o 
OBJ = useList
CFLAGS = -Wall -O -g
$(OBJ):$(OBJS)
	$(CC) $(OBJS) -o $@
.PHONY:clean
clean: 
	find ./ -name "*.o" -type f -print -exec rm {} \;; rm $(OBJ)