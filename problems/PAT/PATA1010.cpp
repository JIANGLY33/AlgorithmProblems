#include<cstdio>

//给出数字串和进制计算出十进制大小
long long calculateByRadix(char digit[], int radix) {
	int i = 0;
	long long res = 0;
	
	while(digit[i] != '\0'){
		if(digit[i] >= '0' && digit[i] <= '9'){
			res = res*radix+(digit[i]-'0');
		}else if(digit[i] >= 'a' && digit[i] <= 'z'){
			res = res*radix+(digit[i]-'a'+10);
		}
		i++;
	}
	return res;
} 


int main() {
	char N1[20],N2[20];
	int flag,radix;
	scanf("%s%s%d%d",N1,N2,&flag,&radix);
	bool judge = false;
	int i = 1;
//	printf("i = %d\n",i);
	if(flag == 1){
		long long N1T = calculateByRadix(N1,radix);
			while(!judge && i <=36) {
//				printf("i = %d\n",i);
				if(N1T == calculateByRadix(N2,i)){
					judge = true;
					break;
				}
				i++;
			}
			
	}else if(flag == 2){
		long long N2T = calculateByRadix(N2,radix);
		while(!judge && i <= 36) {
//			printf("i = %d\n",i);
			if(N2T == calculateByRadix(N1,i)){
				judge = true;
				break;
			}
			i++;
		}
	}

	if(judge)
		printf("%d\n",i);
	else{
		printf("Impossible\n");
	}
}
