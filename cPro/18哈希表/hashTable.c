#include "hashTable.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
hashnode* hash_create(){
	hashnode* ha = (hashnode*)calloc(N, sizeof(hashnode));
	if(ha == NULL){
		printf("hashnode create failed!\n");
		return NULL;	
	}
	return ha;
}                                                                                                                                                                          
int hash_insert(hashnode* h, int id, char* name){
	int tempId = id;
	hashnode node = NULL;
	if(h == NULL){	
		printf("insert h is null\n");
		return -1;
	}
	//取出h[id]指向的头接点的地址	
	tempId = tempId % N;
	//如果h[tempId] == NULL
	if(h[tempId] == NULL){
		h[tempId] =(hashnode)calloc(1, sizeof(hashlist));
		strcpy((h[tempId])->name, name);
		(h[tempId])->next = NULL;
		(h[tempId])->id = id;
		return 0;
	}
	node = h[tempId];
	//查找该头接点往下有没有数据，如果没有数据就插入
	while(node->next){	
		node = node->next;
	}	
	//新建一个节点	
 	hashnode newnode = (hashnode)calloc(1, sizeof(hashlist));
	newnode->next = NULL;
	strcpy(newnode->name, name);
	newnode->id = id;
	//将新节点链接到最后
	node->next = newnode;
//printf("id = %d\n", node->id);
//printf("name = %s\n", node->name);
	return 0;
}                                                                                                                                      
void hash_find(hashnode* h, int id){
	int tempId = id;
	hashnode node = NULL;	
	if(h == NULL){	
		printf("insert h is null\n");
		return;
	}

	//取出h[id]指向的头接点的地址	
	tempId = tempId % N;
	node = h[tempId];
//printf("%s\n", node->name);
//printf("%d\n", node->id);
//printf("=%d\n", node->id);
	//查找该头接点往下有没有数据，如果没有数据就插入
	for(int i = 0; i < N; i++){
	
	}
	while(node){
		if(node->id == id){	
			printf("name = %s, age = %d\n", node->name, node->id);
		}
//printf("=%d\n", node->id);
//printf("=%s\n", node->name);
		node = node->next;
	}		
	return;
}
