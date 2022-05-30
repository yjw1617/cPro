#include "treelink.h"
int main(int argc, char** argv){
    bitree tree = tree_create(100);;
    for(int i = 4; i < 10; i++){
        tree_insert(&tree, i);
    }
    tree_show(tree);
}