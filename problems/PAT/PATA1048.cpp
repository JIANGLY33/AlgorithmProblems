#include<cstdio>
#include<algorithm>
//该方法超时 
using namespace std;

int main() {
	int n,m;
	scanf("%d%d",&n,&m);
	int array[n];
	for(int i = 0; i < n; i++) {
		scanf("%d",&array[i]);
	}
	sort(array,array+n);
	bool flag = false;
	int v1,v2;
	for(v1 = 0; v1 < n; v1++) {
		for(v2 = v1 + 1; v2 < n; v2++) {
			if(array[v1] + array[v2] == m) {
				flag = true;
				break;
			}
		}
		if(flag)break;
	}
	if(flag) {
		printf("%d %d",array[v1],array[v2]);
	}else {
		printf("No Solution");
	}
}

 
