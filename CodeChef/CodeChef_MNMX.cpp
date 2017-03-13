#include <bits/stdc++.h>
using namespace std;

int minimum(int a, int b) {
	if(a < b)
		return a;
	else
		return b;
}

int main() {
	int t;
	scanf("%d",&t);
	while(t--) {
		int n;
		scanf("%d",&n);

		int arr[n];
		for(int i = 0; i < n; i ++)
			scanf("%d",&arr[i]);

		int cost = 0;
		int min = *min_element(arr, arr+n);

	}

	return 0;
}