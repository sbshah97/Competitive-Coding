#include <bits/stdc++.h>
using namespace std;

int main() {
	int a, b;
	scanf("%d %d",&a,&b);

	int total = 0;
	int partial = 0;

	while(a > 0) {
		total += a;
		partial += a;
		a = partial / b;
		partial %= b;
	}

	printf("%d\n",total);

	return 0;
}