#include <bits/stdc++.h>
using namespace std;

int main() {
	int count = 0;
	int k, l, m, n;
	scanf("%d %d %d %d",&k,&l,&m,&n);

	int d;
	scanf("%d",&d);

	for(int i = 1; i <= d; i ++) {
		int flag = 0;
		if(i%k==0||i%l==0||i%m==0||i%n==0) {
			flag = 1;
		}
		if(flag)
			count++;
	}

	printf("%d\n",count);

	return 0;
}