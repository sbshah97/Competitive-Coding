#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	scanf("%d",&t);
	while(t --) {
		int n;
		scanf("%d",&n);
		if(n < 1500)
			printf("%d\n",int(n+0.1*n+0.9*n));
		else
			printf("%.1f\n",n+500+0.98*n);
	}

	return 0;
}