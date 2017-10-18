#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, t, temp;
	scanf("%d %d",&n,&t);

	vector<int> v;

	for(int i = 0; i < n; i ++) {
		scanf("%d",&temp);
		v.push_back(temp);
	}

	int i = 1;

	int flag = 0;

	while(i <= t) {
		if(i == t) {
			flag = 1;
			i += v[i-1];
		}
		else {
			i += v[i-1]; 
		}
	}

	if(flag) {
		printf("YES\n");
	}
	else {
		printf("NO\n");
	}

	return 0;
}