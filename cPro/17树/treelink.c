#include "treelink.h"
#include <stdio.h>
#include <stdlib.h>

bitree tree_create(data_t value){
	bitree r = (bitree)calloc(1, sizeof(treelist));
	if(r == NULL){
		printf("create root error!\n");
		return NULL;
	}
	r->left = NULL;
	r->right = NULL;
	r->data = value;
	return r;
}

int tree_insert_D(bitree* r, data_t value){
	if((*r) == NULL){//如果r为空
		// 创建一个
		bitree newTree = (bitree)calloc(1, sizeof(treelist));
		newTree->left = NULL;
		newTree->right = NULL;
		newTree->data = value;
		(*r) = newTree;
		return 1;
	}
	if((*r)->data <= value){
		tree_insert_D(&((*r)->right), value);
	}else{
		tree_insert_D(&((*r)->left), value);
	}
	return 0;
}
int tree_insert(bitree* r, data_t value){
	if(r == NULL){	
		printf("root is null\n");
		return -1;
	}
	if(!(*r)->data){//如果根节点为空,则将根节点填入
		(*r)->data = value;
	}
	tree_insert_D(r, value);
}

int tree_show(bitree r){
	if(r == NULL){
		return 1;
	}
	printf("value = %d\n", r->data);
	tree_show(r->left);
	tree_show(r->right);
	return 0;
}
int tree_delete();
