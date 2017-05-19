#include <bits/stdc++.h>
using namespace std;

int main() {
	long long int odd_sum = 0;
	long long int even_sum = 0;
	long long int n;
	scanf("%lld",&n);

	even_sum = (((n/2)*((2*2)+((n/2)-1)*2))/2);
	odd_sum = (((n/2)*((2*1)+((n/2)-1)*2))/2);

	printf("%lld\n", (even_sum-odd_sum));

	return 0;
}