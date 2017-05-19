#include <bits/stdc++.h>
using namespace std;

int main() {
	int curr = 0, maxm = 0;

	int t;
	scanf("%d",&t);
	while(t--) {
		int x, y;
		scanf("%d %d",&x,&y);

		curr = curr - x + y;
		maxm = max(maxm, curr);
	}

	printf("%d\n", maxm);

	return 0;
}