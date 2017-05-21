#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, k;

	scanf("%d %d",&n,&k);

	int time = 240 - k;

	int count = 0;
	for(int i = 1; i <= n; i ++) {
		if(5*i <= time) {
			time -= 5*i;
			count ++;
		}
		else {
			break;
		}
	}

	printf("%d\n",count);

	return 0;
}