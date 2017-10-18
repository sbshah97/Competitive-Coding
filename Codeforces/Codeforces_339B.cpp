#include <bits/stdc++.h>
using namespace std;

int main() {
	long long int n, m;
	scanf("%lld %lld",&n,&m);

	int temp;
	vector<long long int> v;
	for(int i = 0; i < m; i ++) {
		cin >> temp;
		v.push_back(temp);
	}

	long long int count = 0;

	long long int initial = 1;
	long long int final = v[0];
	for (long long int i = 0; i < m; i++) {
		if(final >= initial) {
			count += (final - initial);
		}
		else {
			count += abs(n-initial+1) + abs(1-final);
		}
		if(i != m-1) {
			initial = v[i];
			final = v[i+1];
		}
	}

	cout << count << "\n";

	return 0;
}