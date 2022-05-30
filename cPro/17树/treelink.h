#ifndef _TREELINK_H
#define _TREELINK_H
typedef int data_t;

/*树节点*/
typedef struct node{
	data_t data;
	struct node * left; /*节点左边的树枝*/
	struct node * right;/*节点右边的树枝*/
}treelist, *bitree;

bitree tree_create(data_t value);

int tree_insert(bitree* r, data_t value);

int tree_delete();

int tree_show(bitree r);
#endif
