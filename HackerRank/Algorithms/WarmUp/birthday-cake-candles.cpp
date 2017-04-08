#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, temp;
	scanf("%d",&n);

	vector<int> v;
	for(int i = 0; i < n; i ++) {
		scanf("%d",&temp);
		v.push_back(temp);
	}

	sort(v.begin(), v.end());

	int count = 0;
	for(int i = n - 1; ((i >= 0) && (v[i] == v[n-1])); i --) {
		count++;
	}

	printf("%d\n",count);

	return 0;
}