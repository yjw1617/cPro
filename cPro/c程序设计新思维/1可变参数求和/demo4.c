#include <stdio.h>
//I'll do it without the typedef this time.
#define Foreach_string(iterator, ...)\
for (char **iterator = (char*[]){__VA_ARGS__, NULL}; *iterator; iterator++)
int main(){
    char *str = "thread";
    Foreach_string(i, "yarn", str, "rope", "das", "apple"){
    printf("%s\n", *i);
    }
}