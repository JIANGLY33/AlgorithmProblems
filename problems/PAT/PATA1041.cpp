#include<cstdio>

const int maxn = 10000;

int count[maxn];

int main() {
	int n;
	scanf("%d",&n);
	int array[n];
	for(int i = 0; i < n; i++) {
		scanf("%d",&array[i]);
		count[array[i]]++;
	}
	bool flag = false;
	int res;
	for(int i = 0; i < n; i++) {
		if(count[array[i]] == 1){
			res = array[i];
			flag = true;
			break;
		}
	}
	if(flag)printf("%d",res);
	else printf("None");
} 
