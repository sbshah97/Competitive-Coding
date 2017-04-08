#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, temp;
	scanf("%d",&n);
	map<int, int> m;

	for(int i = 0; i < n; i ++) {
		scanf("%d",&temp);
		if(m.find(temp) == m.end()) {
			m[temp] = 1;
		}
		else {
			m[temp]++;
		}
	}

	int val = 0; 
	int max_count = 0;
	for(map<int, int>::iterator it = m.begin(); it != m.end(); ++it) {
		if((*it).second > max_count) {
			max_count = (*it).second;
			val = (*it).first;
		}
	}

	printf("%d\n",val);
	return 0;
}