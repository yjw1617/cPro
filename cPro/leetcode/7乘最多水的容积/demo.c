#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int maxArea(int* height, int heightSize){
    int max = 0;
    int area = 0;
    int left = 0;
    int right = heightSize - 1;
    while(left < right){
        if(height[left] >= height[right]){
            area = height[right] * (right - left);
            right--;
        }else{
            area = height[left] * (right - left);
            left++;
        }
        max = area >= max ? area : max;
    }
    return max;
}

int main(int argc, char** argv){
    int a[1000000];
    time_t t;
    /* 初始化随机数发生器 */
    srand((unsigned) time(&t));
    rand();
    for(int i = 0; i < 1000000; i++){
        a[i] = rand() % 1000 + 1;
    }
    printf("%d\n", maxArea(a, sizeof(a) / sizeof(int)));
    return 0;
}