//题目地址:http://codeup.cn/problem.php?cid=100000626&pid=0

#include<cstdio>
#include<algorithm>

using namespace std;


const int MAX = 10010;  

int A[MAX];

struct res {
	int dp;
	int head;
	int tail;	
} dp[MAX];


int main() {
	
	 
	int n;
	
	//多点测试 
	while(scanf("%d",&n) && n != 0) {
		for(int i=0; i<n; i++) {
			scanf("%d",&A[i]);
		}
		
		//初始化状态 
		dp[0].dp = A[0];
		dp[0].head = A[0];
		dp[0].tail = A[0];
		
		//状态转移
		for(int i = 1; i < n; i++){
			if(dp[i-1].dp+A[i] > A[i]) {
				dp[i].dp = dp[i-1].dp+A[i];
				dp[i].head = dp[i-1].head;
				dp[i].tail = A[i];
			}else{
				dp[i].dp = A[i];
				dp[i].head = A[i];
				dp[i].tail = A[i];	
			}
		}
		
		//找出最大子序列和
		int max_index = 0;
		for(int i = 0; i < n; i++) {
			if(dp[i].dp > dp[max_index].dp)max_index = i; 
		}
		
		//最大子序列和小于0时
		if(dp[max_index].dp < 0)printf("0 %d %d\n",A[0],A[n-1]);
		else{  //最大子序列和不小于0时 
			printf("%d %d %d\n",dp[max_index].dp,dp[max_index].head,dp[max_index].tail);	
		}
	}
} 
