#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	scanf("%d",&n);

	int temp;
	vector<int> v;

	for(int i = 0; i < n; i ++) {
		scanf("%d",&temp);
		if(temp == 0)
			v.push_back(1);
		else 
			v.push_back(-1);
	}

	int sum_max = INT_MIN;
	int length_max = 0;
	for(int i = 0; i < n; i ++) {
		int sum = 0;
		for(int j = i; j < n; j ++) {
			sum += v[j];
			if(sum >= sum_max) {
				sum_max = sum;
				length_max = j-i+1;
			}
		}
	}

	printf("%d\n",length_max);

	return 0;
}