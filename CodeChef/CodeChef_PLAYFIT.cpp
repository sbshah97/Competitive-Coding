#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	scanf("%d",&t);

	while(t--) {
		int n, temp;
		scanf("%d",&n);
		vector<int> v;
		vector<int> min;
		vector<int> max;

		for(int i = 0; i < n; i ++) {
			scanf("%d",&temp);
			v.push_back(temp);
		}

		int mini = INT_MAX;
		int maxi = INT_MIN;
		for(int i = 0; i < n; i ++) {
			if(v[i] < mini) {
				mini = v[i];
				min.push_back(mini);
			} 
			else {
				min.push_back(mini);
			}

			if(v[i] < maxi) {
				maxi = v[i];
				max.push_back(maxi);
			} 
			else {
				max.push_back(maxi);
			}
		}

		int diff = 0;

		for(int i = 0; i < n; i ++) {
			if(max[i]-min[i-1] > diff)
				diff = v[i] - v[i-1];
		}

		if(diff > 0)
			printf("%d\n",diff);
		else
			printf("UNFIT\n");
	}

	return 0;
}
