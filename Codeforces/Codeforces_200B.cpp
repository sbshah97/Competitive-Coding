#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, temp;
	scanf("%d",&n);

	int count = 0;

	for(int i = 0; i < n; i ++) {
		scanf("%d",&temp);
		count += temp;
	}

	printf("%.12lf\n",((double)(count))/n);

	return 0;
}