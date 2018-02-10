#include"algorithm_7_sort.h"
int insertion_sort_main(int * input,int length){
	int i,j,temp;
	for(i=1;i<length;i++){
		for(j=0;j<i;j++){
			if(*(input+j)>*(input+i)){
				temp=*(input+i);
				*(input+i)=*(input+j);
				*(input+j)=temp;
			}
		}
	}
	return 0;
}
int insertion_sort_main_better(int * input,int length){
	int i,j,temp;
	for(i=1;i<length;i++){
		temp=*(input+i);
		for(j=i-1;j>=0&&*(input+j)>temp;j--){
			*(input+j+1)=*(input+j);
		}
		*(input+j+1)=temp;
	}
	return 0;
}
int shell_sort_main(int * input,int length){
	int hk;
	for(hk=length/2;hk>0;hk=hk/2){
		for(int first=0;first<hk;first++){
			int i,j,temp;
			for(i=first+hk;i<length;i=i+hk){
				temp=*(input+i);
				for(j=i-hk;j>=0&&*(input+j)>temp;j=j-hk){
					*(input+j+hk)=*(input+j);
				}
				*(input+j+hk)=temp;
			}
		}
	}
	return 0;
}
int * Msort_main(int * input,int length){
	int * a,* b,* malloc_p;
	int length1,length2,i,j;
	length1=length/2;
	length2=length-length1;
	if(length==1){
		return input;
	}else{
		a=Msort_main(input,length1);
		b=Msort_main(input+length1,length2);
		malloc_p=(int*)malloc(length*sizeof(int));
		for(i=0,j=0;i<length1&&j<length2;){
			if(*(a+i)<*(b+j)){
				*(malloc_p+i+j)=*(a+i);
				i++;
			}else if(*(a+i)>=*(b+j)){
				*(malloc_p+i+j)=*(b+j);
				j++;
			}
		}
		while(i<length1){
			*(malloc_p+i+j)=*(a+i);
			i++;
		}
		while(j<length2){
			*(malloc_p+i+j)=*(b+j);
			j++;
		}
		memcpy(a,malloc_p,length*sizeof(int));
		free(malloc_p);
		return a;
	}
}
