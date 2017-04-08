#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, temp;
	scanf("%d",&n);

	vector<int> v;
	for(int i = 0; i < n; i ++) {
		scanf("%d",&temp);
		v.push_back(temp);
	}

	int low = v[0];
	int high = v[0];

	int low_score = 0;
	int high_score = 0;

	for(int i = 1; i < n; i ++) {
		if(v[i] < low) {
			low = v[i];
			low_score++;
		}
		if(v[i] > high) {
			high = v[i];
			high_score++;
		}
	}

	printf("%d %d\n", high_score,low_score);

	return 0;
}