#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, m;
	scanf("%d %d",&n,&m);

	char c;
	int flag = 1;
	for(int i = 0; i < n; i ++) {
		for(int j = 0; j < m; j ++) {
			cin >> c;
			if(c == 'C' || c == 'M' || c == 'Y') {
				flag = 0;
			}
		}
	}

	if(flag) {
		printf("#Black&White\n");
	}
	else {
		printf("#Color\n");
	}

	return 0;
}