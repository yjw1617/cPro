#ifndef _HASHTABLE_H
#define _HASHTABLE_H
#define N 23
typedef char data_t;
typedef struct Hashlist{
	int id;
	data_t name[10];
	struct Hashlist* next;
}hashlist,*hashnode;
hashnode* hash_create();

int hash_insert(hashnode* h, int id, char* name);
	
void hash_find(hashnode* h, int id);


#endif
