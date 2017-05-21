#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, k, temp;

	scanf("%d %d",&n,&k);
	std::vector<int> v;

	for(int i = 0; i < n; i ++) {
		scanf("%d",&temp);
		v.push_back(temp);
	}

	sort(v.begin(), v.end());

	int count = 0;
	for(int i = 2; i < n; i += 3) {
		if((5-v[i]) >= k) {
			count ++;
		}
	}

	printf("%d\n",count);

	return 0;
}