#include<cstdio>

//序列不重复，不缺失 
//有两组数据将会超时 

struct Res{
	bool flag;
	int index;
};

//找到num的下标，前提:num一定在数组中 
int getIndex(int num, int array[], int length) {
	int res = 0;
	for(int i = 0; i < length; i++) {
		if(array[i] == num){
			res = i;
			break;
		}
	}
	return res;
}

int findMin(int array[], int length){
	int min = array[0];
	for(int i = 0; i < length; i++) {
		if(min > array[i]){
			min = array[i];
		}
	}
	return min;
}

//判断序列是否有序，若无序的话同时记录下第一个无序数字的下标 
Res judge(int array[], int length) {
	Res res;
	res.flag = true;
	res.index = -1;
	for(int i = 0; i < length; i++) {
		if(array[i] != i){
			res.flag = false;
			res.index = i;
			break;
		}
	}
	return res;
}

int main() {
	int n;
	scanf("%d",&n);
	int array[n];
	for(int i = 0; i < n; i++){
		scanf("%d",&array[i]);
	}
	int index = getIndex(0,array,n);
	
	int times = 0;
	while(true) {
		int i = 0;
		for(; i < n; i++) {
			if(array[i] == index)break;
		}
//		printf("0 index is %d\n",index);
//		printf("%d's index is %d\n",array[i],i);
//		printf("%d<->%d\n",array[index],array[i]);
		
		if(index == 0){
//			for(int i = 0; i < n; i++)printf("%d ",array[i]);
                                                                                                                                                                                                               
			Res res = judge(array,n);
//			printf("%d\n",res.index); 
			if(res.flag){
				break;
			}else{
				int temp = array[index];
				array[index] = array[res.index];
				array[res.index] = temp;
//				printf("%d<->%d\n",array[index],array[res.index]);
				index = res.index;
				times++;
//				printf("0 index:%d\n",index);
			}
		}else{
			int temp = array[index];
			array[index] = array[i];
			array[i] = temp;
			times++;
		}
		
		index = getIndex(0,array,n);
		
	
	} 
	
	printf("%d",times);
} 
