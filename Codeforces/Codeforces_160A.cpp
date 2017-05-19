#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, temp;
	std::vector<int> v;

	scanf("%d",&n);

	int sum = 0, sum_twin = 0, count = 0;

	for(int i = 0; i < n; i ++) {
		scanf("%d",&temp);
		v.push_back(temp);
		sum += temp;
	}

	sort(v.begin(), v.end());

	vector<int>::iterator it;
	it = v.end();

	int i = v.size()-1;

	while(sum >= sum_twin) {
		sum_twin += v[i];
		sum -= v[i];
		i--;
		count++;
	}

	printf("%d\n",count);

	return 0;
}