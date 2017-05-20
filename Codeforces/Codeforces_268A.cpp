#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, temp1, temp2, count = 0;
	scanf("%d",&n);

	std::vector<int> v1;
	std::vector<int> v2;

	for(int i = 0; i < n; i ++) {
		scanf("%d %d",&temp1,&temp2);
		v1.push_back(temp1);
		v2.push_back(temp2);
	}

	for(int i = 0; i < n; i ++) {
		for(int j = 0; j < n; j ++) {
			if(v1[i] == v2[j]) {
				count ++;
			}
		}
	}

	printf("%d\n",count);

	return 0;
}