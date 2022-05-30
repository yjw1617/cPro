#include <stdio.h>
int main(int argc, char** argv){
    int a,b,*pa=&a,*pb=&b; if(*pa>*pb) puts("yes");
}