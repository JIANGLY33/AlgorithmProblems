#include<cstdio>

using namespace std;


int count = 1;

void calculate(int n) {
	if(n == 1){
		return;
	}
	
	for(int i = 1; i <= n/2; i++) {
	
		calculate(i);
		printf("---count__%d__%i\n",count,i);
		count++;
	}
} 



int main() {
	calculate(6);
	printf("%d",count);
} 
