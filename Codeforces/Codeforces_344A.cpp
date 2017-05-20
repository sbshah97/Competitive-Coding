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

	int count = 1;
	for(int i = 1; i < n; i ++) {
		if(v[i] != v[i-1]) {
			count++;
		}
	}

	printf("%d\n",count);

	return 0;
}
