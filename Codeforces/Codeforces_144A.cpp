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

	int min = INT_MAX;
	int max = INT_MIN;

	int min_index = 0;
	int max_index = 0;

	for(int i = 0; i < n; i ++) {
		if(v[i] <= min) {
			min = v[i];
			min_index = i;
		}
		if(v[i] > max) {
			max = v[i];
			max_index = i;
		}
	}
	// printf("%d %d\n",min_index,max_index);

	int count = 0;
	// printf("%d\n",count);

	count += (max_index - 0);
	// printf("%d\n",count);

	count += (n - min_index -1);
	// printf("%d\n",count);

	if(min_index < max_index) {
		count--;
	}
	printf("%d\n",count);

	return 0;
}