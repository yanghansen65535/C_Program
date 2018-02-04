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
	insertion_sort_main_better(a,10);
	print_array(a,10);
	getchar();
	return 0;
}
