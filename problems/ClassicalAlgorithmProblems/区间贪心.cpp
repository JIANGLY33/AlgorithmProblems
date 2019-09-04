#include<cstdio>
#include<algorithm>

using namespace std;

struct Interval {
	int x;
	int y;
};


bool cmp(Interval a, Interval b) {
	if(a.x != b.x)return a.x > b.x;  //左端点越大的在越前面 
	else return a.y < b.y;  //左端点相同的话，右端点越小的在越前面 
}

int main() {
	int n;
	while(scanf("%d",&n),n != 0) {
		Interval x[n];
		for(int i = 0; i < n; i++) {
			scanf("%d%d",&x[i].x,&x[i].y);
		}
		sort(x,x+n,cmp);
		int res = 1, last = x[0].x;
		for(int i = 1; i < n; i++) {
			if(x[i].y <= last) {
				res ++;
				last = x[i].x;
			}
		} 
		printf("%d",res); 
	}
}
