#include<cstdio>
//hash
const int maxm = 1010;

int hashTable[maxm];

int main() {
	int n,m;
	scanf("%d%d",&n,&m);
	for(int i = 0; i < n; i++) {
		int temp;
		scanf("%d",&temp);
		hashTable[temp]++;
	}
	bool flag = false;
	int j = m-1;
	for(;j>0;j--) {
		if(hashTable[j] > 0 && hashTable[m-j]){
			if((j == m-j) && hashTable[j] < 2)break;
			flag = true;
			break;
		}
	}
	if(flag)printf("%d %d",m-j,j);
	else printf("No Solution");
} 
