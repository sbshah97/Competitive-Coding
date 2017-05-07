#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, k, temp, max;
	scanf("%d %d",&n,&k);

	vector<int> v;

	for(int i = 0; i < n; i ++) {
		scanf("%d",&temp);
		v.push_back(temp);
		if(i+1 == k)
			max = temp;
	}

	int count = 0;
	for(int i = 0; i < n; i ++) {
		if(v[i] >= max && v[i] > 0)
			count ++;
	}

	printf("%d\n",count);

	return 0;
} 