#include "fastSort.h"
#include <stdio.h>
int fastSort(data_t* a, int left, int right){
	
	//设置一个中间值下标
	data_t temp;
	for(int i = left; i < (right + left) / 2; i++){
		for(int j = i; j < right; j++){
			if(a[j] < a[(left + right) / 2]){
				temp = a[j];
				a[j] = a[i];
				a[i] = temp;
			}
		}
	}
	//排左边
	fastSort(a, left, (right+left) / 2 - 1);
	fastSort(a, (left + right) / 2 + 1, right);
	return 0;
}

void arry_show(data_t* a, int len){
	for(int i = 0; i < len; i++){
		printf("%d ", a[i]);
	}
	puts("");
}



void QuickSort(int *arr, int low, int high)
{
    if (low < high)
    {
        int i = low;
        int j = high;
        int k = arr[low];
        while (i < j)
        {
            while(i < j && arr[j] >= k)     // 从右向左找第一个小于k的数
            {
                j--;
            }
 
            if(i < j)
            {
                arr[i++] = arr[j];
            }
 
            while(i < j && arr[i] < k)      // 从左向右找第一个大于等于k的数
            {
                i++;
            }
 
            if(i < j)
            {
                arr[j--] = arr[i];
            }
        }
 
        arr[i] = k;
 
        // 递归调用
        QuickSort(arr, low, i - 1);     // 排序k左边
        QuickSort(arr, i + 1, high);    // 排序k右边
}
}
