#include <stdio.h>
// int recursion(int n){
//     if(n == 1 | n == 0){
//         return 1;
//     }
//     return recursion(n - 1) + recursion(n - 2);
// }
int recursion(int n){
    if(!n){
        return 1;
    }
    return n * recursion(n -1);
}
int main(int argc, char** argv){
    printf("%d\n", recursion(5));
    return 0;
}