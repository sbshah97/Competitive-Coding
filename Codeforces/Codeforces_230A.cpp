#include <bits/stdc++.h>
using namespace std;

int main() {
	int s, n, flag = 1;
	scanf("%d %d",&s,&n);

	std::vector< pair <int, int > > v;

	for(int i = 0; i < n; i ++) {
		int x, y;
		scanf("%d %d",&x,&y);
		v.push_back(make_pair(x, y));
	}

	sort(v.begin(), v.end());

	for(int i = 0; i < n; i ++) {
		if(s > v[i].first) {
			s += v[i].second;
		}
		else {
			printf("NO\n");
			exit(0);
		}
	}

	printf("YES\n");
	return 0;	
}