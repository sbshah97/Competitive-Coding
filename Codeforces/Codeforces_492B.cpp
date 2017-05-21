#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, l;
	scanf("%d %d",&n,&l);

	std::vector<double> v;
	double temp;

	for(int i = 0; i < n; i ++) {
		scanf("%lf",&temp);
		v.push_back(temp);
	}

	sort(v.begin(), v.end());

	double max_diff = (v[0] - 0);
	for(int i = 1; i < n; i ++) {
		max_diff = max(max_diff, ((v[i]-v[i-1])/2));
	}
	max_diff = max(max_diff, (l-v[n-1]));

	printf("%.10lf\n",max_diff);

	return 0;
}