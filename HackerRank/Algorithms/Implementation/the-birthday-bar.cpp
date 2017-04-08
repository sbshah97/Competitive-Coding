#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, temp, val = 0;
	scanf("%d",&n);

	vector<int> v;
	for(int i = 0; i < n; i ++) {
		scanf("%d",&temp);
		v.push_back(temp);
	}

	int d, m;
	scanf("%d %d",&d,&m);

	for(int i = 0; i < n - m + 1; i ++) {
		int count = 0;
		for(int j = 0; j < m; j ++) {
			count += v[i+j];
			printf("%d\n",count );
		}
		if(count == d)
			val++;
	}

	printf("%d\n",val);

	return 0;
}