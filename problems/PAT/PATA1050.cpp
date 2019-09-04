#include<cstdio>
#include<cstring>

const int maxn = 10010;

char a[maxn],b[maxn];
bool hashTable[128] = {false};

int main() {
	//PAT±‡“Î∆˜≤ª÷ß≥÷gets 
	//gets(a);
	//gets(b);
	
	fgets(a,maxn,stdin);
	fgets(b,maxn,stdin);
	int j = 0;
	while(a[j] != '\n') {
		j++;
	}
	a[j] = '\0';
	j = 0;
	while(b[j] != '\n') {
		j++;
	}
	b[j] = '\0';
	
	int lengthA = strlen(a);
	int lengthB = strlen(b);
	
	for(int i = 0; i < lengthB; i++) {
		hashTable[b[i]] = true;
	}
	for(int i = 0; i < lengthA; i++) {
		if(hashTable[a[i]] == false) {
			printf("%c",a[i]);
		}
	}
}
