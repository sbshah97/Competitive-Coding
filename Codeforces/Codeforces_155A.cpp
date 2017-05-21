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

	int count = 0;
	int mini = v[0], maxi = v[0];

	for(int i = 1; i < n; i ++) {
		if(v[i] < mini) {
			count++;
			mini = v[i];
		}
		else if(v[i] > maxi) {
			count++;
			maxi = v[i];
		}
	}

	printf("%d\n",count);

	return 0;
}