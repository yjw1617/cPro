CC = gcc
OBJS = test.o doubleList.o 
OBJ = test
CFLAGS = -Wall -O -g
VPATH = doubleList
$(OBJ):$(OBJS)
	$(CC) $^ -o $@

test.o:test.c 
	$(CC) -c $< $(CFLAGS) -o $@

doubleList/doubleList.o:doubleList.c
	$(CC) -c $< $(CFLAGS) -o $@

.PHONY:clean
clean:
	@find ./ -name "*.o" -type f -print -exec rm {} \;;rm $(OBJ)

