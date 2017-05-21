#include <bits/stdc++.h>
using namespace std;

int main() {
	long long int n;
	scanf("%lld",&n);

	cout << (n - 1) * n * (n + 1) / 6 + n << endl;
	
	return 0;
}