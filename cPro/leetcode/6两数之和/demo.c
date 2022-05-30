// 给定一个整数数组 nums 和一个整数目标值 target，请你在该数组中找出 和为目标值 target  的那 两个 整数，并返回它们的数组下标。

// 你可以假设每种输入只会对应一个答案。但是，数组中同一个元素在答案里不能重复出现。
#include <stdlib.h>
#include <stdio.h>
int* twoSum(int* nums, int numsSize, int target, int* returnSize){
    int* ret = (int*)calloc(2, sizeof(int));
    for(int i = 0; i < numsSize - 1; i++){
        for(int j = i + 1; j < numsSize; j++){
            if(nums[i] + nums[j] == target){
                ret[0] = i;
                ret[1] = j;
                return ret;
            }
        }
    }
    return NULL;
}
int main(int argc, char** argv){
    int a[] = {2,7,11,15};
    printf("ret[0] = %d, ret[1] = %d\n", (twoSum(a, sizeof(a) / sizeof(int), 9, NULL))[0], (twoSum(a, sizeof(a) / sizeof(int), 9, NULL))[1]);
}