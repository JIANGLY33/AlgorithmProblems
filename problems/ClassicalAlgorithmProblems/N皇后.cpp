#include<cstdio> 
#include<cmath>

const int maxn = 110;

int hashTable[maxn] = {false},p[maxn],count = 0,n;


//输出n皇后的序列以及计数 
void generate(int index) {  //index为当前列 
	if(index == n+1) {
		count++;
		
		for(int i = 1; i <= n; i++){
			printf("%d",p[i]);
		}
		printf("\n");
		return ;
	}
	
	for(int i = 1; i <= n; i++) {  //当前行 
		if(hashTable[i] == false) {
			bool flag = true;
			for(int j = 1; j < index; j++) {  //j为先前列，p[j]为先前列的行 
				if(abs(i-p[j]) == abs(index-j)){
					flag = false;
					break;
				}
			}
			if(flag) {
				hashTable[i] = true;
				p[index] = i;
				generate(index+1);
				hashTable[i] = false; 
			}
		}
	}
	
}


int main() {
	n = 8;
	generate(1);
	printf("count:%d",count); 
}
