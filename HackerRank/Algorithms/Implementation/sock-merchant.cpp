#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, temp, count = 0;
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

	for(map<int, int>::iterator it = m.begin(); it != m.end(); ++it) {
		count += ((*it).second)/2;
	}

	printf("%d\n",count);
}