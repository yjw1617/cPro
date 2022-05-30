#include <stdio.h>
#include "hashTable.h"
int main(int argc, char** argv){
	hashnode* h = NULL;
	h = hash_create();
	//插入
	
	hash_insert(h, 1, "yjw");
	hash_insert(h, 1, "dasf");
	hash_insert(h, 1, "thankyou");
	hash_insert(h, 2, "dage");
	hash_insert(h, 2, "niuniu");
	hash_insert(h, 2, "tom");
	hash_insert(h, 2, "lolo");
	hash_insert(h, 2, "huhu");
	//显示年龄为1岁的有哪些人
	hash_find(h, 1);
	//显示年龄为2岁的有哪些人
	hash_find(h, 2);
	return 0;
}
