#include "fastSort.h"
int main(int argc, char** argv){
	int a[] = {3,4,1,5,8,10,6};
//	QuickSort(a, 0,sizeof(a)/sizeof(int) - 1);	
	fastSort(a, 0, sizeof(a) / sizeof(int) - 1 );
	arry_show(a, sizeof(a)/sizeof(int));
	return 0;
}
