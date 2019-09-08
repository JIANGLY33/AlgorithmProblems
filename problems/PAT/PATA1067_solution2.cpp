#include<cstdio>
#include<algorithm>

using namespace std;

const int maxn = 100010;

int main() {
	int n;
	scanf("%d",&n);
	//除0以外未在自己位置上的数字个数，交换次数 
	int left = n-1,ans = 0,pos[n];
	
	for(int i = 0; i < n; i++) {
		int temp;
		scanf("%d",&temp);
		pos[temp] = i;
		
		if(temp == i && temp != 0) {
			left--;
		}
	}
	
	int k = 1;
	
	while(left > 0){
		if(pos[0] == 0){
			while(k < n){
				if(pos[k] != k){
					swap(pos[0],pos[k]);
					ans++;   //交换次数+1，left不变，因为未归位的数并未减少 
					break;
				} 
				k++;
			}
		}
		
		while(pos[0] != 0){
			swap(pos[0],pos[pos[0]]);//将0的位置和0的坐标数的位置进行交换
			ans++;
			left--; 
		}
	}
	printf("%d",ans);
	return 0;
	
}
