#include<cstdio>
#include<algorithm>

using namespace std;


const int MAX = 10010;  

int A[MAX];
int dp[MAX];
 
int main() {
	
	int n;
	scanf("%d",&n);
	for(int i=0; i<n; i++) {
		scanf("%d",&A[i]);
	}
	
	dp[0] = A[0];
	for(int i = 1; i < n; i++){
		dp[i] = max(dp[i-1]+A[i],A[i]);
	}
	
	printf("%d\n",*max_element(dp,dp+n));
} 
