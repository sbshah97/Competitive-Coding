#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, temp;
	scanf("%d",&n);

	std::vector<int> v;

	for(int i = 0; i < n; i ++) {
		scanf("%d",&temp);
		v.push_back(temp);
	}

	sort(v.begin(), v.end());

	for(int i = 0; i < n; i ++) {
		printf("%d ",v[i]);
	}
	printf("\n");

	return 0;
}	