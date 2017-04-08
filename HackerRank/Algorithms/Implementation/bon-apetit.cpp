#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, k, temp, count = 0;
	scanf("%d %d",&n,&k);

	vector<int> v;
	for(int i = 0; i < n; i++) {
		scanf("%d",&temp);
		v.push_back(temp);
		if(i != k) {
			count += temp;
		}
	}

	int val;
	scanf("%d",&val);

	if(val == (count/2))
		printf("Bon Appetit\n");
	else
		printf("%d\n",val-(count/2) );

	return 0;

}