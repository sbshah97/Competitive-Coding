#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	scanf("%d",&t);

	int count = 0;

	for(int i = 0; i < t; i ++) {
		int p, q;
		scanf("%d %d",&p,&q);

		if(q-p >= 2) {
			count++;
		} 
	}

	printf("%d\n",count );
	return 0;
}