#include <bits/stdc++.h>
using namespace std;

int main() {

	long long int n;
	scanf("%lld",&n);

	int sign;
	if(n%2 != 0) {
		sign = -1;
		n = (n+1)/2;
	}
	else {
		sign = 1;
		n = n/2;
	}

	printf("%lld\n", (n*sign));

	return 0;
}