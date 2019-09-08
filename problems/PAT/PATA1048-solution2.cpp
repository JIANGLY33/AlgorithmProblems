#include<cstdio>
#include<algorithm>
//Ë«Ö¸Õë 
using namespace std;

int main() {
	int n,m;
	scanf("%d%d",&n,&m);
	int array[n];
	for(int i = 0; i < n; i++) {
		scanf("%d",&array[i]);
	}
	sort(array,array+n);
	int v1 = 0,v2 = n-1;
	bool flag = false;
	while(v1 < v2) {
		if(array[v1]+array[v2] == m) {
			flag = true;
			break;
		}
		else if(array[v1] + array[v2] < m) {
			v1++;
		}else {
			v2--;
		}
	}
	if(flag)printf("%d %d",array[v1],array[v2]);
	else printf("No Solution");
} 
