#include <bits/stdc++.h>
using namespace std;

int main() {
	int k, r;
	scanf("%d %d",&k,&r);
	int price = k;

	int count = 1;
	while(k%10 != r && k%10 != 0) {
		k += price;
		count ++;
	}

	printf("%d\n",count);

	return 0;
} 