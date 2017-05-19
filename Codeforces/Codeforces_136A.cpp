#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, temp;
	scanf("%d",&n);

	int arr[n+2];

	for(int i = 1; i <= n; i ++) {
		scanf("%d",&temp);
		arr[temp] = i;
	}

	for(int i = 1; i <= n; i ++) {
		printf("%d ",arr[i]);
	}
	printf("\n");

	return 0;
}