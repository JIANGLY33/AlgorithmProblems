#include<cstdio>
#include<algorithm>

using namespace std;

int main() {
	int n;
	scanf("%d",&n);
	int dp[n+1];
	fill(dp,dp+n+1,1);
	
	for(int i = 1; i<= n; i++) {
		for(int j = 1; j <= i/2; j++) {
			dp[i] += dp[j];
		}
	}
	
	printf("%d\n",dp[n]);
}
