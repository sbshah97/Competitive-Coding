#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, temp;
	scanf("%d",&n);

	int count[n] = {0};

	for(int i = 0; i < n; i ++) {
		for(int j = 0; j < 3; j ++) {
			scanf("%d",&temp);
			if(temp == 1)
				count[i]++;
		}
	}

	temp = 0;
	for(int i = 0; i < n; i ++) {
		if(count[i] >= 2)
			temp ++;
	}

	printf("%d\n",temp);

	return 0;
}