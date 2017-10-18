#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	scanf("%d",&n);
	int temp;

	int a = 0, b = 0, c = 0;

	for(int i = 0; i < n; i ++) {
		scanf("%d",&temp);
		a += temp;
	}

	for(int i = 0; i < n-1; i ++) {
		scanf("%d",&temp);
		b += temp;
	}

	for(int i = 0; i < n-2; i ++) {
		scanf("%d",&temp);
		c += temp;
	}

	printf("%d\n%d\n",a-b,b-c);

	return 0;
}