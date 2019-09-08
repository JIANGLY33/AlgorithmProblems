#include<cstdio>
#include<algorithm>

using namespace std;

const int maxn = 100010;

int main() {
	int n;
	scanf("%d",&n);
	//��0����δ���Լ�λ���ϵ����ָ������������� 
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
					ans++;   //��������+1��left���䣬��Ϊδ��λ������δ���� 
					break;
				} 
				k++;
			}
		}
		
		while(pos[0] != 0){
			swap(pos[0],pos[pos[0]]);//��0��λ�ú�0����������λ�ý��н���
			ans++;
			left--; 
		}
	}
	printf("%d",ans);
	return 0;
	
}