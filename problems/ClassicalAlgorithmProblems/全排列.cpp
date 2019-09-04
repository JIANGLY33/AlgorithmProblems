#include<cstdio>

const int maxn = 11;

int n,p[maxn],hashTable[maxn] = {false};

void generate(int index) {
	if(index == n+1){
		for(int i = 1; i <= n; i++) {
			printf("%d",p[i]);
		}
		printf("\n");
		return ;
	} 
	
	for(int j = 1; j <= n; j++) {
		if(!hashTable[j]) {
			p[j] = index;
			hashTable[j] = true;
			generate(index+1);
			hashTable[j] = false;
		}
	}
}



int main() {
	n = 3;
	generate(1);
	return 0;
} 
