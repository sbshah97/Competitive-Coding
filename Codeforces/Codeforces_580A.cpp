#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, temp, count = 1;
	scanf("%d",&n);

	std::vector<int> v;
	for(int i = 0; i < n; i ++) {
		scanf("%d",&temp);
		v.push_back(temp);
	}

	int max_count = 1;
	temp = v[0];
	for(int i = 1; i < n; i ++) {
		if(v[i] >= v[i-1]) {
			count++;
		}
		else {
			count = 1;
		}
		max_count = max(max_count, count);
		// temp = v[i];
	}

	printf("%d\n",max_count);

	return 0;
}