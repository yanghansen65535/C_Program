#include"algorithm_7_sort.h"
int print_array(int * input,int length){
	for(int i=0;i<length;i++){
		printf("%d ",*(input+i));
	}
	printf("\n");
	return 0;
}
int main(void){
	int a[10]={1,4,7,2,5,8,3,6,9,0};
	print_array(a,10);
	quick_sort_main(a,10);
	print_array(a,10);
	return 0;
}
