#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	scanf("%d",&t);
	while(t--) {
		int n, k, temp;
		scanf("%d %d",&n,&k);
		vector<int> v;
		for(int i = 0; i < n; i ++) {
			scanf("%d",&temp);
			v.push_back(temp);
		}

		sort(v.begin(), v.end());

		int chef1 = 0, kid1 = 0;

		for(int i = 0; i < k; i ++) {
			kid1 += v[i];
		}

		for(int i = k; i < n; i ++) {
			chef1 += v[i];
		}

		int chef2 = 0, kid2 = 0;

		for(int i = n-1; i >= k; i --) {
			kid2 += v[i];
		}

		for(int i = k-1; i >= 0; i --) {
			chef2 += v[i];
		}

		int val = max(abs(chef2 - kid2), abs(chef1 - kid1));
		
		printf("%d\n",val);
	}

	return 0;
}