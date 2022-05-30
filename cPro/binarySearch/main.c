#include <stdio.h>
void binarySearch(int* arrays, int key, int n){
    int left = 0;
    int right = n - 1;
    int midIndex = 10000;
    while(left <= right){
        midIndex = (left + right) / 2;
        if (arrays[midIndex] == key){
            printf("find key = %d\n", key);
            return;
        } else if(arrays[midIndex] > key){
            right = midIndex -1;
        } else if(arrays[midIndex] < key){
            left = midIndex + 1;
        }
    }
    printf("dont find key\n");
    return;
}
int main(){
    int a[10] = {1,5,7,1880,10650,27543,27743,29543};
    binarySearch(a, 29543, sizeof(a) / sizeof(int));
    return 0;
}