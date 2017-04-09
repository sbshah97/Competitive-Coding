#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	scanf("%d",&t);
	while(t--) {
		int x, y, z;
		scanf("%d %d %d",&x,&y,&z);

		x = abs(x - z);
		y = abs(y - z);

		if(x == y)
			printf("Mouse C\n");
		else if(x > y)
			printf("Cat B\n");
		else
			printf("Cat A\n");
	}

	return 0;
}