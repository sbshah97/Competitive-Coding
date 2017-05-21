#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, h, temp, count = 0;
	scanf("%d %d",&n,&h);

	for(int i = 0; i < n; i ++) {
		scanf("%d",&temp);
		if(temp > h) {
			count ++;
		}
	}

	printf("%d\n",(count+n));

	return 0;
}