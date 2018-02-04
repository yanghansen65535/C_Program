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
