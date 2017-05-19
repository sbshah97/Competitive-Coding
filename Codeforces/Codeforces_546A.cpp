#include <bits/stdc++.h>
using namespace std;

int main() {
	int k, w;
	long long int n;
	scanf("%d %lld %d",&k,&n,&w);

	long long int sum = (long long int)(((w*(w+1))/2)*k) - n;

	printf("%lld\n",sum);

	return 0;
}