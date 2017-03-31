#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	scanf("%d",&t);
	while(t --) {
		int n, k;
		scanf("%d %d",&n,&k);
		if(k == 0)
			printf("%d %d\n",k,n);
		else
			printf("%d %d\n",(int)n/k, (int)n%k);
	}

	return 0;
}